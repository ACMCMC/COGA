#include <glad.h>
#include <glfw3.h>
#include <stdio.h>
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "esfera.h"

unsigned int VAOEjes, VAOCubo, VAOEsfera, VAOCirculo;
unsigned int camara = 0;

unsigned int SCR_WIDTH = 800;
unsigned int SCR_HEIGHT = 800;

double currentTime;
int dibujar_orbita = 1;

glm::vec3 lightColor = glm::vec3(1.0f, 1.0f, 1.0f);
glm::vec3 lightPos = glm::vec3(0.0f, 0.0f, 0.0f);

extern GLuint setShaders(const char* nVertx, const char* nFrag);
GLuint shaderProgram;

void tiempo() {
	currentTime = glfwGetTime();
}

class ObjetoSistemaSolar {
public:
	glm::vec3 escalaBase = glm::vec3(0.3f, 0.3f, 0.3f);
	glm::vec3 color;
	unsigned int VAO;
	unsigned int EBO_number_to_draw;
	GLenum tipoPrimitivas = GL_TRIANGLES;
	float distancia_centro;
	float velocidad_rotacion;
	float velocidad_rotacion_orbita;
	float escala;
	glm::vec3 punto_orbita;
	glm::vec3 distorsion;

	ObjetoSistemaSolar() {};

	ObjetoSistemaSolar(glm::vec3 color, float escala, float velocidad_rotacion, float velocidad_rotacion_orbita, float distancia_centro, unsigned int VAO, unsigned int EBO_number_to_draw) {
		this->color = color;
		this->velocidad_rotacion = velocidad_rotacion;
		this->velocidad_rotacion_orbita = velocidad_rotacion_orbita;
		this->distancia_centro = distancia_centro;
		this->escala = escala;
		this->VAO = VAO;
		this->EBO_number_to_draw = EBO_number_to_draw;
		distorsion = glm::vec3(1.0f, 1.0f, 1.0f);
		punto_orbita = glm::vec3(0.0f, 0.0f, 0.0f);
	}

	void setPuntoOrbita(glm::vec3 punto_orbita) {
		this->punto_orbita = punto_orbita;
	}

	glm::mat4 getMatTransformacionLocal() {
		glm::mat4 transform = glm::mat4();
		transform = glm::rotate(transform, (float)glfwGetTime() * velocidad_rotacion, glm::vec3(0.0f, 1.0f, 0.0f));
		transform = glm::scale(transform, distorsion);
		transform = glm::scale(transform, glm::vec3(escala, escala, escala));
		transform = glm::scale(transform, escalaBase);
		return transform;
	}

	glm::mat4 getMatTransformacionWorld() {
		glm::mat4 transform = glm::mat4();
		transform = glm::translate(transform, getPosicion());
		return transform;
	}

	glm::mat4 getMatTransformacion() {
		glm::mat4 transform = getMatTransformacionWorld() * getMatTransformacionLocal();
		return transform;
	}

	glm::vec3 getPosicion() {
		glm::vec3 ubicacion_dentro_de_orbita = glm::vec3(cos(currentTime * velocidad_rotacion_orbita) * distancia_centro, 0.0f, sin(currentTime * velocidad_rotacion_orbita) * distancia_centro);
		return punto_orbita + ubicacion_dentro_de_orbita;
	}

	void dibujar(glm::vec3 from, glm::vec3 to, glm::mat4 projection) {
		glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
		glBindVertexArray(VAO);

		unsigned int modelLoc = glGetUniformLocation(shaderProgram, "model");
		unsigned int viewLoc = glGetUniformLocation(shaderProgram, "view");
		unsigned int projectionLoc = glGetUniformLocation(shaderProgram, "projection");
		unsigned int objectColorLoc = glGetUniformLocation(shaderProgram, "objectColor");
		unsigned int lightColorLoc = glGetUniformLocation(shaderProgram, "lightColor");
		unsigned int lightPosLoc = glGetUniformLocation(shaderProgram, "lightPos");
		unsigned int viewPosLoc = glGetUniformLocation(shaderProgram, "viewPos");

		glm::mat4 view = glm::lookAt(from, to, glm::vec3(0.0f, 1.0f, 0.0f));
		glm::mat4 matCalculada = getMatTransformacion();
		glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(matCalculada));
		glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
		glUniformMatrix4fv(projectionLoc, 1, GL_FALSE, glm::value_ptr(projection));
		glUniform3fv(objectColorLoc, 1, glm::value_ptr(color));
		glUniform3fv(lightColorLoc, 1, glm::value_ptr(lightColor));
		glUniform3fv(lightPosLoc, 1, glm::value_ptr(lightPos));
		glUniform3fv(viewPosLoc, 1, glm::value_ptr(from));
		glDrawElements(tipoPrimitivas, EBO_number_to_draw, GL_UNSIGNED_INT, NULL);
		glBindVertexArray(0);

		if (dibujar_orbita) {
			glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
			glBindVertexArray(VAOCirculo);
			glUniform3f(objectColorLoc, 1.0f, 1.0f, 1.0f);

			glm::mat4 matCalculada = glm::mat4();
			matCalculada = glm::translate(matCalculada, punto_orbita);
			matCalculada = glm::rotate(matCalculada, 0*glm::half_pi<float>(), glm::vec3(1.0f, 0.0f, 0.0f));
			matCalculada = glm::scale(matCalculada, glm::vec3(distancia_centro, distancia_centro, distancia_centro));

			glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(matCalculada));

			glDrawElements(GL_LINE_LOOP, 40, GL_UNSIGNED_INT, NULL);
			glBindVertexArray(0);
		}
	}
};

ObjetoSistemaSolar sol, mercurio, venus, tierra, luna, iss_cuerpo_principal, iss_cuerpo_brazos, marte, jupiter, saturno, urano, neptuno;

glm::mat4 matPerspectiva() {
	return glm::perspective(glm::radians(60.0f), (float)SCR_WIDTH / (float)SCR_HEIGHT, 0.1f, 1000.0f);
}

void drawAll(glm::vec3 from, glm::vec3 to, glm::mat4 projection) {
	sol.dibujar(from, to, projection);
	mercurio.dibujar(from, to, projection);
	venus.dibujar(from, to, projection);
	tierra.dibujar(from, to, projection);

	glm::mat4 matTransformacionTierra = tierra.getMatTransformacion();
	luna.setPuntoOrbita(tierra.getPosicion());
	luna.dibujar(from, to, projection);
	iss_cuerpo_principal.setPuntoOrbita(luna.getPosicion());
	iss_cuerpo_principal.dibujar(from, to, projection);
	iss_cuerpo_brazos.setPuntoOrbita(iss_cuerpo_principal.getPosicion());
	iss_cuerpo_brazos.dibujar(from, to, projection);

	marte.dibujar(from, to, projection);
	jupiter.dibujar(from, to, projection);
	saturno.dibujar(from, to, projection);
	urano.dibujar(from, to, projection);
	neptuno.dibujar(from, to, projection);
}

void myCamara() {
	drawAll(glm::vec3(0.0f, 200.0f, 200.0f), glm::vec3(0.0f, 0.0f, 0.0f), matPerspectiva());
}

void myTelescopio(ObjetoSistemaSolar from, ObjetoSistemaSolar to) {
	drawAll(from.getPosicion(), to.getPosicion(), matPerspectiva());
}

void crearEjes() {
	unsigned int VBO, EBO;
	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		//Vertices           //Colores
		0.0f, 0.0f, 0.0f,	 1.0f, 1.0f, 1.0f, // 0
		.5f, 0.0f, 0.0f,	 1.0f, 0.0f, 0.0f, //x
		0.0f, .5f, 0.0f,	 0.0f, 1.0f, 0.0f, // y
		0.0f, 0.0f, .5f,	 0.0f, 0.0f, 1.0f, // z  
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

void crearCubo() {
	unsigned int VBO, EBO;

	float vertices[] = {
	-0.5f, -0.5f, +0.5f, +0.0f, +0.0f, +1.0f, // 0  vertice inferior izquierdo de la cara frontal, normal hacia +z
	-0.5f, -0.5f, -0.5f, +0.0f, +0.0f, -1.0f, // 1  vertice inferior derecho de la cara trasera, normal hacia -z
	-0.5f, +0.5f, +0.5f, +0.0f, +0.0f, +1.0f, // 2  vertice superior izquierdo de la cara frontal, normal hacia +z
	-0.5f, +0.5f, -0.5f, +0.0f, +0.0f, -1.0f, // 3  vertice superior derecho de la cara trasera, normal hacia -z
	+0.5f, -0.5f, +0.5f, +0.0f, +0.0f, +1.0f, // 4  vertice inferior derecho de la cara frontal, normal hacia +z
	+0.5f, -0.5f, -0.5f, +0.0f, +0.0f, -1.0f, // 5  vertice inferior izquierdo de la cara trasera, normal hacia -z
	+0.5f, +0.5f, +0.5f, +0.0f, +0.0f, +1.0f, // 6  vertice superior derecho de la cara frontal, normal hacia +z
	+0.5f, +0.5f, -0.5f, +0.0f, +0.0f, -1.0f, // 7  vertice superior izquierdo de la cara trasera, normal hacia -z

	-0.5f, -0.5f, +0.5f, -1.0f, +0.0f, +0.0f, // 8  vertice inferior derecho de la cara izquierda, normal hacia -x
	-0.5f, -0.5f, -0.5f, -1.0f, +0.0f, +0.0f, // 9  vertice inferior izquierdo de la cara izquierda, normal hacia -x
	-0.5f, +0.5f, +0.5f, -1.0f, +0.0f, +0.0f, // 10 vertice superior derecho de la cara izquierda, normal hacia -x
	-0.5f, +0.5f, -0.5f, -1.0f, +0.0f, +0.0f, // 11 vertice superior izquierdo de la cara izquierda, normal hacia -x
	+0.5f, -0.5f, +0.5f, +1.0f, +0.0f, +0.0f, // 12 vertice inferior izquierdo de la cara derecha, normal hacia +x
	+0.5f, -0.5f, -0.5f, +1.0f, +0.0f, +0.0f, // 13 vertice inferior derecho de la cara derecha, normal hacia +x
	+0.5f, +0.5f, +0.5f, +1.0f, +0.0f, +0.0f, // 14 vertice superior izquierdo de la cara derecha, normal hacia +x
	+0.5f, +0.5f, -0.5f, +1.0f, +0.0f, +0.0f, // 15 vertice superior derecho de la cara derecha, normal hacia +x

	-0.5f, -0.5f, +0.5f, +0.0f, -1.0f, +0.0f, // 16 vertice superior izquierdo de la cara inferior, normal hacia -y
	-0.5f, -0.5f, -0.5f, +0.0f, -1.0f, +0.0f, // 17 vertice inferior izquierdo de la cara inferior, normal hacia -y
	-0.5f, +0.5f, +0.5f, +0.0f, +1.0f, +0.0f, // 18 vertice inferior izquierdo de la cara superior, normal hacia +y
	-0.5f, +0.5f, -0.5f, +0.0f, +1.0f, +0.0f, // 19 vertice superior izquierdo de la cara superior, normal hacia +y
	+0.5f, -0.5f, +0.5f, +0.0f, -1.0f, +0.0f, // 20 vertice superior derecho de la cara inferior, normal hacia -y
	+0.5f, -0.5f, -0.5f, +0.0f, -1.0f, +0.0f, // 21 vertice inferior derecho de la cara inferior, normal hacia -y
	+0.5f, +0.5f, +0.5f, +0.0f, +1.0f, +0.0f, // 22 vertice inferior derecho de la cara superior, normal hacia +y
	+0.5f, +0.5f, -0.5f, +0.0f, +1.0f, +0.0f  // 23 vertice superior derecho de la cara superior, normal hacia +y
	};

	unsigned int indices[] = {
		1,7,5, // cara trasera
		1,3,7, // cara trasera
		0,6,2, // cara delantera
		0,4,6, // cara delantera
		13,14,12, // cara derecha
		13,15,14, // cara derecha
		9,10,11, // cara izquierda
		9,8,10, // cara izquierda
		19,22,23, // cara superior
		19,18,22, // cara superior
		16,21,20, // cara inferior
		16,17,21  // cara inferior
	};

	glGenVertexArrays(1, &VAOCubo);
	glGenBuffers(1, &VBO);
	glGenBuffers(1, &EBO);
	glBindVertexArray(VAOCubo);

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
	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(3 * sizeof(float)));
	//glEnableVertexAttribArray(2);

	// Vertices
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(5 * sizeof(float)));
	glEnableVertexAttribArray(0);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
	glDeleteBuffers(1, &VBO);
	glDeleteBuffers(1, &EBO);
}

void crearCirculo() {
	unsigned int VBO, EBO;

	unsigned int indices[] = {
	0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39
	};

	glGenVertexArrays(1, &VAOCirculo);
	glGenBuffers(1, &VBO);
	glGenBuffers(1, &EBO);
	// bind the Vertex Array Object first.
	glBindVertexArray(VAOCirculo);

	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(*vertices_esfera) * 8 * (3 * 18 * 2 + 3 * 4), vertices_esfera + 8 * (3 * 18 * 8 - 3 * 4 + 1), GL_STATIC_DRAW);

	// Normales
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 3 * 8 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(1);

	// Textura
	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 3 * 8 * sizeof(float), (void*)(3 * sizeof(float)));
	glEnableVertexAttribArray(2);

	// Vertices
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * 8 * sizeof(float), (void*)(5 * sizeof(float)));
	glEnableVertexAttribArray(0);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
	glDeleteBuffers(1, &VBO);
	glDeleteBuffers(1, &EBO);
}

void openGlInit() {
	glClearDepth(1.0f); //Valor z-buffer
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);  // valor limpieza buffer color
	glEnable(GL_DEPTH_TEST); // z-buffer
	glEnable(GL_CULL_FACE); //ocultacion caras back
	glCullFace(GL_BACK);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glViewport(0, 0, SCR_WIDTH, SCR_HEIGHT);

	switch (camara) {
	case 1:
		myTelescopio(tierra, sol);
		break;
	case 2:
		myTelescopio(tierra, mercurio);
		break;
	case 3:
		myTelescopio(tierra, venus);
		break;
	case 4:
		myTelescopio(tierra, luna);
		break;
	case 5:
		myTelescopio(tierra, iss_cuerpo_principal);
		break;
	case 6:
		myTelescopio(luna, tierra);
		break;
	case 7:
		myTelescopio(luna, iss_cuerpo_principal);
		break;
	case 8:
		myTelescopio(neptuno, iss_cuerpo_principal);
		break;
	case 9:
		myTelescopio(mercurio, saturno);
		break;
	case 0:
	default:
		myCamara();
		break;
	}
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_F1 && action == GLFW_PRESS) {
		dibujar_orbita = !dibujar_orbita;
	}
	if (key == GLFW_KEY_0 && action == GLFW_PRESS) {
		camara = 0;
	}
	if (key == GLFW_KEY_1 && action == GLFW_PRESS) {
		camara = 1;
	}
	if (key == GLFW_KEY_2 && action == GLFW_PRESS) {
		camara = 2;
	}
	if (key == GLFW_KEY_3 && action == GLFW_PRESS) {
		camara = 3;
	}
	if (key == GLFW_KEY_4 && action == GLFW_PRESS) {
		camara = 4;
	}
	if (key == GLFW_KEY_5 && action == GLFW_PRESS) {
		camara = 5;
	}
	if (key == GLFW_KEY_6 && action == GLFW_PRESS) {
		camara = 6;
	}
	if (key == GLFW_KEY_7 && action == GLFW_PRESS) {
		camara = 7;
	}
	if (key == GLFW_KEY_8 && action == GLFW_PRESS) {
		camara = 8;
	}
	if (key == GLFW_KEY_9 && action == GLFW_PRESS) {
		camara = 9;
	}
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
		glfwSetWindowShouldClose(window, GLFW_TRUE);
	}
}

void window_size_callback(GLFWwindow* window, int width, int height)
{
	SCR_WIDTH = width;
	SCR_HEIGHT = height;
}

int main()
{
	// glfw: initialize and configure
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "Clases", NULL, NULL);
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	glfwSetKeyCallback(window, key_callback);
	glfwSetWindowSizeCallback(window, window_size_callback);

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
	glUseProgram(shaderProgram);

	crearEjes();
	crearEsfera();
	crearCubo();
	crearCirculo();

	// ObjetoSistemaSolar(glm::vec3 color, float escala, float velocidad_rotacion, float velocidad_rotacion_orbita, float distancia_centro, unsigned int VAO, unsigned int EBO_number_to_draw)
	sol = ObjetoSistemaSolar(glm::vec3(1.0f, 4.0f, 0.0f), 25.0f, 0.5f, 0.0f, 0.0f, VAOEsfera, 1080);
	mercurio = ObjetoSistemaSolar(glm::vec3(0.48f, 0.49f, 0.05f), 3.0f, 0.5f, 2.0f, 10.0f, VAOEsfera, 1080);
	venus = ObjetoSistemaSolar(glm::vec3(0.7f, 0.7f, 0.7f), 3.0f, 0.05f, 0.3f, 15.0f, VAOEsfera, 1080);
	tierra = ObjetoSistemaSolar(glm::vec3(0.28f, 0.21f, 0.16f), 10.0f, 0.7f, 0.75f, 30.0f, VAOEsfera, 1080);
	luna = ObjetoSistemaSolar(glm::vec3(0.5f, 0.5f, 0.5f), 5.0f, 0.5f, 0.4f, 10.0f, VAOEsfera, 1080);
	iss_cuerpo_principal = ObjetoSistemaSolar(glm::vec3(0.3f, 0.3f, 0.3f), 5.0f, 0.3f, 0.3f, 5.0f, VAOCubo, 36);
	iss_cuerpo_brazos = ObjetoSistemaSolar(glm::vec3(0.3f, 0.3f, 0.3f), 5.0f, 0.3f, 0.0f, 0.0f, VAOCubo, 36);
	marte = ObjetoSistemaSolar(glm::vec3(0.66f, 0.14f, 0.2f), 8.0f, 1.2f, 1.2f, 50.0f, VAOEsfera, 1080);
	jupiter = ObjetoSistemaSolar(glm::vec3(0.65f, 0.61f, 0.52f), 15.0f, 5.0f, 3.0f, 60.0f, VAOEsfera, 1080);
	saturno = ObjetoSistemaSolar(glm::vec3(0.2f, 0.23f, 0.27f), 20.0f, 0.2f, 0.2f, 73.0f, VAOEsfera, 1080);
	urano = ObjetoSistemaSolar(glm::vec3(0.3f, 0.81f, 0.93f), 15.0f, 0.5f, 1.3f, 85.0f, VAOEsfera, 1080);
	neptuno = ObjetoSistemaSolar(glm::vec3(0.24f, 0.33f, 0.91f), 15.0f, 3.0f, 2.6f, 95.0f, VAOEsfera, 1080);

	iss_cuerpo_principal.distorsion = glm::vec3(0.4f, 2.0f, 0.4f);
	iss_cuerpo_brazos.distorsion = glm::vec3(1.5f, 0.3f, 0.1f);

	// Lazo de la ventana mientras no la cierre
	// -----------
	while (!glfwWindowShouldClose(window))
	{
		display();
		tiempo();

		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glDeleteVertexArrays(1, &VAOEjes);

	glfwTerminate();
	return 0;
}
