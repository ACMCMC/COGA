#include <glad.h>
#include <glfw3.h>
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <vector>

#include "esfera.h"

double currentTime;

float angulo_brazo1_1, angulo_brazo1_2, angulo_brazo2_1, angulo_brazo2_2;

unsigned int VAOEjes, VAOEsfera, VAOCubo, VAOCuadrado;

void _printMatrix(glm::mat4 mat) {
	const float* pSource = (const float*)glm::value_ptr(mat);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << std::fixed << std::setw(4) << std::setprecision(2)
				<< std::setfill('0') << pSource[i * 4 + j] << "\t";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}

void tiempo() {
	currentTime = glfwGetTime();
}

class Objeto {
public:
	glm::vec3 escalaBase = glm::vec3(1.0f, 1.0f, 1.0f);
	glm::vec3 color;
	glm::vec3 distorsion;
	glm::vec3 posicion_mundo;
	glm::vec3 posicion_local;
	glm::mat4 rotacion_local;
	glm::mat4* viewMatrix;

	unsigned int VAO;
	unsigned int EBO_number_to_draw;
	int useEBO = 1;
	
	Objeto() {};

	Objeto(glm::vec3 color, unsigned int VAO, unsigned int EBO_number_to_draw, glm::mat4* matCamara) {
		this->color = color;
		this->VAO = VAO;
		this->EBO_number_to_draw = EBO_number_to_draw;
		distorsion = glm::vec3(1.0f, 1.0f, 1.0f);
		posicion_mundo = glm::vec3(0.0f, 0.0f, 0.0f);
		posicion_local = glm::vec3(0.0f, 0.0f, 0.0f);
		this->viewMatrix = matCamara;
		rotacion_local = glm::mat4();
	};

	void toggleUseEBO() {
		useEBO = !useEBO;
	}

	glm::mat4 getMatTransformacionLocal() {
		glm::mat4 transform = glm::mat4();
		transform = glm::scale(transform, distorsion);
		transform = glm::scale(transform, escalaBase);
		transform = glm::translate(transform, posicion_local);
		transform = rotacion_local * transform;
		
		return transform;
	}

	glm::mat4 getMatTransformacionWorld() {
		glm::mat4 transform = glm::mat4();
		transform = glm::translate(transform, getPosicion());
		return transform;
	}

	glm::vec3 getPosicion() {
		return posicion_mundo;
	}
	
	void setPosicion(glm::vec3 pos) {
		posicion_mundo = pos;
	}

	void setPosicionLocal(glm::vec3 pos) {
		posicion_local = pos;
	}

	void setDistorsion(glm::vec3 d) {
		distorsion = d;
	}

	void setRotacionLocal(glm::mat4 rotacionLocal) {
		this->rotacion_local = rotacionLocal;
	}

	void dibujar(unsigned int locTransform, unsigned int locColor, GLenum drawMode) {
		dibujar(locTransform, locColor, drawMode, getMatTransformacionWorld(), getMatTransformacionLocal());
	}

	void dibujar(unsigned int locTransform, unsigned int locColor, GLenum drawMode, glm::mat4 matTrans) {
		dibujar(locTransform, locColor, drawMode, matTrans, glm::mat4());
	}

	void dibujar(unsigned int locTransform, unsigned int locColor, GLenum drawMode, glm::mat4 matWorld, glm::mat4 matLocal) {
		glPolygonMode(GL_FRONT_AND_BACK, drawMode);
		glBindVertexArray(VAO);

		glm::mat4 matCalculada = *viewMatrix * matWorld * matLocal;
		glUniformMatrix4fv(locTransform, 1, GL_FALSE, glm::value_ptr(matCalculada));
		glUniform3fv(locColor, 1, glm::value_ptr(color));
		if (useEBO) {
			glDrawElements(GL_TRIANGLES, EBO_number_to_draw, GL_UNSIGNED_INT, NULL);
		}
		else {
			glDrawArrays(GL_TRIANGLES, 0, EBO_number_to_draw);
		}

		glBindVertexArray(0);
	}
};

Objeto cuadrado_suelo, base_grua, esfera_base, esfera_brazo, brazo_1, brazo_2;

glm::mat4 viewMatrix;

void processInput(GLFWwindow* window);

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 800;

extern GLuint setShaders(const char* nVertx, const char* nFrag);
GLuint shaderProgram;

void crearEjes() {
	unsigned int VBO, EBO;
	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		//Vertices           //Colores
		0.0f, 0.0f, 0.0f,	 1.0f, 1.0f, 1.0f, // 0
		.5f, 0.0f, 0.0f,	 1.0f, 0.0f, 0.0f, //x
		0.0f, .5f, 0.0f,	 0.0f, 1.0f, 0.0f, // y
		0.0f, .5f, 0.0f,	 0.0f, 0.0f, 1.0f, // z  
		.5f , .5f, 0.5f,	 1.0f, 1.0f, 1.0f  // 1,1,1 bueno realmente la mitad
	};
	unsigned int indices[] = {  // empieza desde cero
		0, 1,
		0, 2,
		0, 3,
		0, 4
	};

	glGenVertexArrays(1, &VAOEjes);
	glGenBuffers(1, &VBO);
	glGenBuffers(1, &EBO);

	glBindVertexArray(VAOEjes);

	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// position attribute
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);

	// color attribute

	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
	glEnableVertexAttribArray(1);



	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
	glDeleteBuffers(1, &VBO);
	glDeleteBuffers(1, &EBO);

}

void crearEsfera() {
	unsigned int VBO, EBO;

	unsigned int indices[] = {
	0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317,318,319,320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,384,385,386,387,388,389,390,391,392,393,394,395,396,397,398,399,400,401,402,403,404,405,406,407,408,409,410,411,412,413,414,415,416,417,418,419,420,421,422,423,424,425,426,427,428,429,430,431,432,433,434,435,436,437,438,439,440,441,442,443,444,445,446,447,448,449,450,451,452,453,454,455,456,457,458,459,460,461,462,463,464,465,466,467,468,469,470,471,472,473,474,475,476,477,478,479,480,481,482,483,484,485,486,487,488,489,490,491,492,493,494,495,496,497,498,499,500,501,502,503,504,505,506,507,508,509,510,511,512,513,514,515,516,517,518,519,520,521,522,523,524,525,526,527,528,529,530,531,532,533,534,535,536,537,538,539,540,541,542,543,544,545,546,547,548,549,550,551,552,553,554,555,556,557,558,559,560,561,562,563,564,565,566,567,568,569,570,571,572,573,574,575,576,577,578,579,580,581,582,583,584,585,586,587,588,589,590,591,592,593,594,595,596,597,598,599,600,601,602,603,604,605,606,607,608,609,610,611,612,613,614,615,616,617,618,619,620,621,622,623,624,625,626,627,628,629,630,631,632,633,634,635,636,637,638,639,640,641,642,643,644,645,646,647,648,649,650,651,652,653,654,655,656,657,658,659,660,661,662,663,664,665,666,667,668,669,670,671,672,673,674,675,676,677,678,679,680,681,682,683,684,685,686,687,688,689,690,691,692,693,694,695,696,697,698,699,700,701,702,703,704,705,706,707,708,709,710,711,712,713,714,715,716,717,718,719,720,721,722,723,724,725,726,727,728,729,730,731,732,733,734,735,736,737,738,739,740,741,742,743,744,745,746,747,748,749,750,751,752,753,754,755,756,757,758,759,760,761,762,763,764,765,766,767,768,769,770,771,772,773,774,775,776,777,778,779,780,781,782,783,784,785,786,787,788,789,790,791,792,793,794,795,796,797,798,799,800,801,802,803,804,805,806,807,808,809,810,811,812,813,814,815,816,817,818,819,820,821,822,823,824,825,826,827,828,829,830,831,832,833,834,835,836,837,838,839,840,841,842,843,844,845,846,847,848,849,850,851,852,853,854,855,856,857,858,859,860,861,862,863,864,865,866,867,868,869,870,871,872,873,874,875,876,877,878,879,880,881,882,883,884,885,886,887,888,889,890,891,892,893,894,895,896,897,898,899,900,901,902,903,904,905,906,907,908,909,910,911,912,913,914,915,916,917,918,919,920,921,922,923,924,925,926,927,928,929,930,931,932,933,934,935,936,937,938,939,940,941,942,943,944,945,946,947,948,949,950,951,952,953,954,955,956,957,958,959,960,961,962,963,964,965,966,967,968,969,970,971,972,973,974,975,976,977,978,979,980,981,982,983,984,985,986,987,988,989,990,991,992,993,994,995,996,997,998,999,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013,1014,1015,1016,1017,1018,1019,1020,1021,1022,1023,1024,1025,1026,1027,1028,1029,1030,1031,1032,1033,1034,1035,1036,1037,1038,1039,1040,1041,1042,1043,1044,1045,1046,1047,1048,1049,1050,1051,1052,1053,1054,1055,1056,1057,1058,1059,1060,1061,1062,1063,1064,1065,1066,1067,1068,1069,1070,1071,1072,1073,1074,1075,1076,1077,1078,1079
	};

	glGenVertexArrays(1, &VAOEsfera);
	glGenBuffers(1, &VBO);
	glGenBuffers(1, &EBO);
	// bind the Vertex Array Object first.
	glBindVertexArray(VAOEsfera);

	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices_esfera), vertices_esfera, GL_STATIC_DRAW);

	// Normales
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(1);

	// Textura
	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(3 * sizeof(float)));
	glEnableVertexAttribArray(2);

	// Vértices
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(5 * sizeof(float)));
	glEnableVertexAttribArray(0);

	//glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	//glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
	glDeleteBuffers(1, &VBO);
	glDeleteBuffers(1, &EBO);

}

void crearCubo() {
	unsigned int VBO, EBO;

	float vertices[] = {
	-0.5f, -0.5f,  0.5f, // 0
	-0.5f, -0.5f, -0.5f, // 1
	-0.5f,  0.5f,  0.5f, // 2
	-0.5f,  0.5f, -0.5f, // 3
	 0.5f, -0.5f,  0.5f, // 4
	 0.5f, -0.5f, -0.5f, // 5
	 0.5f,  0.5f,  0.5f, // 6
	 0.5f,  0.5f, -0.5f, // 7
	};

	unsigned int indices[] = {
		1,5,7,
		1,7,3,
		0,2,6,
		0,6,4,
		5,4,6,
		5,6,7,
		1,3,2,
		1,2,0,
		3,7,6,
		3,6,2,
		0,4,5,
		0,5,1
	};

	glGenVertexArrays(1, &VAOCubo);
	glGenBuffers(1, &VBO);
	glGenBuffers(1, &EBO);
	glBindVertexArray(VAOCubo);

	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
	glDeleteBuffers(1, &VBO);
	glDeleteBuffers(1, &EBO);
}

void crearCuadrado() {
	unsigned int VBO, EBO;

	float vertices[] = {
	-0.5f, -0.5f,  0.0f,  0.0f, 0.0f,0.0f,
	0.5f, -0.5f,  0.0f,  1.0f, 0.0f,0.0f,
	0.5f,  0.5f,  0.0f,  1.0f, 1.0f,0.0f,
	-0.5f,  0.5f,  0.0f,  0.0f, 0.0f,0.0f,
	};

	unsigned int indices[] = {
		0, 1, 2,
		0, 2, 3
	};

	glGenVertexArrays(1, &VAOCuadrado);
	glGenBuffers(1, &VBO);
	glGenBuffers(1, &EBO);
	glBindVertexArray(VAOCuadrado);

	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);

	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
	glEnableVertexAttribArray(1);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
	glDeleteBuffers(1, &VBO);
	glDeleteBuffers(1, &EBO);
}

void openGlInit() {
	//Habilito aqui el depth en vez de arriba para los usuarios de linux y mac mejor arriba
	//Incializaciones varias
	glClearDepth(1.0f); //Valor z-buffer
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);  // valor limpieza buffer color
	glEnable(GL_DEPTH_TEST); // z-buffer
	glEnable(GL_CULL_FACE); //ocultacion caras back
	glCullFace(GL_BACK);
}

void display() {
	glClearColor(0.0f, 0.0f, 0.3f, 1.0f); //Borro el Buffer the la ventana
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glViewport(0, 0, SCR_WIDTH, SCR_HEIGHT);

	glUseProgram(shaderProgram);

	unsigned int locTransform = glGetUniformLocation(shaderProgram, "transform");
	unsigned int locColor = glGetUniformLocation(shaderProgram, "color");

	float i, j;
	float escala_suelo = 8;
	cuadrado_suelo.setDistorsion(glm::vec3((1/escala_suelo), (1 / escala_suelo), (1 / escala_suelo)));
	for (i = -2; i <= 2; i += (1 / escala_suelo)) {
		for (j = -2; j <= 2; j += (1 / escala_suelo)) {
			cuadrado_suelo.setPosicion(glm::vec3(i, 0.0f, j));
			cuadrado_suelo.dibujar(locTransform, locColor, GL_LINE);
		}
	}

	base_grua.dibujar(locTransform, locColor, GL_FILL);

	glm::mat4 transform = glm::mat4();
	transform = glm::translate(transform, brazo_1.getPosicion());
	transform = glm::rotate(transform, glm::radians(angulo_brazo1_1), glm::vec3(1.0f, 0.0f, 0.0f));
	transform = glm::rotate(transform, glm::radians(angulo_brazo1_2), glm::vec3(0.0f, 1.0f, 0.0f));
	glm::mat4 transform_temp = transform;
	transform = transform * brazo_1.getMatTransformacionLocal();
	brazo_1.dibujar(locTransform, locColor, GL_FILL, transform);
	esfera_base.dibujar(locTransform, locColor, GL_FILL);

	transform = transform_temp;
	transform = glm::translate(transform, glm::vec3(0.0f, 0.3f, 0.0f));
	transform_temp = transform;
	transform = transform * esfera_brazo.getMatTransformacionLocal();
	esfera_brazo.dibujar(locTransform, locColor, GL_FILL, transform);

	transform = transform_temp;
	transform = glm::translate(transform, brazo_2.getPosicion());
	transform = glm::rotate(transform, glm::radians(angulo_brazo2_1), glm::vec3(1.0f, 0.0f, 0.0f));
	transform = glm::rotate(transform, glm::radians(angulo_brazo2_2), glm::vec3(0.0f, 1.0f, 0.0f));
	transform_temp = transform;
	transform = transform * brazo_2.getMatTransformacionLocal();
	brazo_2.dibujar(locTransform, locColor, GL_FILL, transform);

	/*glBindVertexArray(VAOEsfera);
	glm::mat4 matCalculada = glm::rotate(matCalculada, (float) 1.14, glm::vec3(1.0f, 0, 0));
	matCalculada = glm::scale(glm::mat4(), glm::vec3(0.2f, 0.2f, 0.2f));
	glm::vec3 color = glm::vec3(0.5f, 0.5f, 0.0f);
	glUniformMatrix4fv(locTransform, 1, GL_FALSE, glm::value_ptr(matCalculada));
	glUniform3fv(locColor, 1, glm::value_ptr(color));
	glDrawArrays(GL_TRIANGLES, 0, 1080);
	glBindVertexArray(0);*/
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);

int main()
{
	// glfw: initialize and configure
	// ------------------------------
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);



	//Creo la ventana

	GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "Clases", NULL, NULL);
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	glfwSetKeyCallback(window, key_callback);

	// glad: load all OpenGL function pointers
	// ---------------------------------------
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initialize GLAD" << std::endl;
		return -1;
	}

	openGlInit();

	//generarShader();
	shaderProgram = setShaders("shader.vert", "shader.frag");

	crearEjes();
	crearEsfera();
	crearCubo();
	crearCuadrado();

	cuadrado_suelo = Objeto(glm::vec3(0.0f, 0.0f, 1.0f), VAOCuadrado, 6, &viewMatrix);
	cuadrado_suelo.setRotacionLocal(glm::rotate(glm::mat4(), glm::half_pi<float>(), glm::vec3(1.0f, 0.0f, 0.0f)));

	base_grua = Objeto(glm::vec3(0.5f, 1.0f, 0.0f), VAOCubo, 36, &viewMatrix);
	base_grua.setPosicionLocal(glm::vec3(0.0f, 0.5f, 0.0f));
	base_grua.setDistorsion(glm::vec3(0.3f, 0.2f, 0.3f));

	brazo_1 = Objeto(glm::vec3(0.0f, 1.0f, 0.5f), VAOCubo, 36, &viewMatrix);
	brazo_1.setPosicionLocal(glm::vec3(0.0f, 0.5f, 0.0f));
	brazo_1.setDistorsion(glm::vec3(0.05f, 0.3f, 0.05f));
	brazo_1.setPosicion(glm::vec3(0.0f, 0.2f, 0.0f));

	esfera_base = Objeto(glm::vec3(0.5f, 0.0f, 0.5f), VAOEsfera, 1080, &viewMatrix);
	esfera_base.setDistorsion(glm::vec3(0.05f, 0.05f, 0.05f));
	esfera_base.setPosicion(glm::vec3(0.0f, 0.2f, 0.0f));
	esfera_base.toggleUseEBO();
	
	esfera_brazo = Objeto(glm::vec3(0.5f, 0.0f, 0.5f), VAOEsfera, 1080, &viewMatrix);
	esfera_brazo.setDistorsion(glm::vec3(0.05f, 0.05f, 0.05f));
	esfera_brazo.toggleUseEBO();

	brazo_2 = Objeto(glm::vec3(0.0f, 1.0f, 0.5f), VAOCubo, 36, &viewMatrix);
	brazo_2.setPosicionLocal(glm::vec3(0.0f, 0.5f, 0.0f));
	brazo_2.setDistorsion(glm::vec3(0.05f, 0.2f, 0.05f));

	// Lazo de la ventana mientras no la cierre
	// -----------
	while (!glfwWindowShouldClose(window))
	{
		// render
		// ------
		display();
		tiempo();

		glfwSwapBuffers(window);
		glfwPollEvents();
	}


	glDeleteVertexArrays(1, &VAOEjes);



	glfwTerminate();
	return 0;
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	std::cout << key << std::endl;
	//A
	if (key == 65 && angulo_brazo1_1 < 80) {
		angulo_brazo1_1++;
	}
	//S
	if (key == 83 && angulo_brazo1_1 > -80) {
		angulo_brazo1_1--;
	}
	//W
	if (key == 87) {
		angulo_brazo1_2++;
	}
	//D
	if (key == 68) {
		angulo_brazo1_2--;
	}
	//T
	if (key == 84 && angulo_brazo2_1 < 120) {
		angulo_brazo2_1++;
	}
	//G
	if (key == 71 && angulo_brazo2_1 > -120) {
		angulo_brazo2_1--;
	}
	//F
	if (key == 70) {
		angulo_brazo2_2++;
	}
	//H
	if (key == 72) {
		angulo_brazo2_2--;
	}
	//K
	if (key == 75) {
		viewMatrix = glm::rotate(viewMatrix, -glm::quarter_pi<float>() / 90.0f, glm::vec3(1.0f, 0.0f, 0.0f));
	}
	//L
	if (key == 76) {
		viewMatrix = glm::rotate(viewMatrix, glm::quarter_pi<float>() / 90.0f, glm::vec3(1.0f, 0.0f, 0.0f));
	}
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);
}
