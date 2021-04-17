#include <glad.h>
#include <glfw3.h>
#include <stdio.h>
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

unsigned int VAOEjes;
unsigned int VAOCubo;

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 800;

extern GLuint setShaders(const char* nVertx, const char* nFrag);
GLuint shaderProgram;

class viewport {
public:
	unsigned int x_min, x_max, y_min, y_max;

	viewport(unsigned int x_min, unsigned int x_max, unsigned int y_min, unsigned int y_max) {
		this->x_min = x_min;
		this->x_max = x_max;
		this->y_min = y_min;
		this->y_max = y_max;
	}
};

void drawSquare(glm::mat4 view, glm::mat4 projection, viewport vp) {
	glViewport(vp.x_min, vp.x_max, vp.y_min, vp.y_max);
	unsigned int viewLoc = glGetUniformLocation(shaderProgram, "view");
	glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
	unsigned int projectionLoc = glGetUniformLocation(shaderProgram, "projection");
	glUniformMatrix4fv(projectionLoc, 1, GL_FALSE, glm::value_ptr(projection));
	glm::mat4 model = glm::mat4(1.0f);
	unsigned int modelLoc = glGetUniformLocation(shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
	unsigned int colorLoc = glGetUniformLocation(shaderProgram, "color");
	glUniform3f(colorLoc, 1.0, 1.0, 1.0);

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBindVertexArray(VAOEjes);
	glDrawElements(GL_LINES, 8, GL_UNSIGNED_INT, 0);
	
	model = glm::mat4(1.0f);
	model = glm::scale(model, glm::vec3(0.3f, 0.3f, 0.3f));
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
	glBindVertexArray(VAOCubo);
	glDrawArrays(GL_TRIANGLES, 0, 36);
	glBindVertexArray(0);
}

glm::mat4 matPerspectiva() {
	return glm::perspective(glm::radians(45.0f), (float) SCR_WIDTH / (float) SCR_HEIGHT, 0.1f, 10.0f);
}

glm::mat4 matOrto() {
	return glm::ortho(-1.0f, 1.0f, -1.0f, 1.0f, -.1f, 2.0f);
}

glm::mat4 matPlanta() {
	return glm::lookAt(glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, -1.0f));
}

glm::mat4 matPerfil() {
	return glm::lookAt(glm::vec3(1.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f));
}

glm::mat4 matAlzado() {
	return glm::lookAt(glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f));
}

void vp1() {
	viewport vp = viewport(0, SCR_HEIGHT / 2, SCR_WIDTH / 2, SCR_HEIGHT / 2);
	drawSquare(matPerfil(), matOrto(), vp);
}
void vp2() {
	viewport vp = viewport(SCR_WIDTH / 2, SCR_HEIGHT / 2, SCR_WIDTH / 2, SCR_HEIGHT / 2);
	drawSquare(matAlzado(), matOrto(), vp);
}
void vp3() {
	viewport vp = viewport(0, 0, SCR_WIDTH / 2, SCR_HEIGHT / 2);
	drawSquare(matAlzado(), matPerspectiva(), vp);
}
void vp4() {
	viewport vp = viewport(SCR_WIDTH / 2, 0, SCR_WIDTH / 2, SCR_HEIGHT / 2);
	drawSquare(matPlanta(), matOrto(), vp);
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

void crearCubo() {
	unsigned int VBO, EBO;

	float vertices[] = {
	-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,0.0f,
	0.5f, -0.5f,  0.5f,  1.0f, 0.0f,0.0f,
	0.5f,  0.5f,  0.5f,  1.0f, 1.0f,0.0f,
	-0.5f,  -0.5f,  0.5f,  1.0f, 1.0f,0.0f,
	0.5f,  0.5f,  0.5f,  1.0f, 0.0f,0.0f,
	-0.5f,  0.5f,  0.5f,  0.0f, 0.0f,0.0f,
	// Triángulo trasero inferior
	-.5f, -.5f, -.5f, 1.0f, 1.0f, 0.0f,
	.5f, .5f, -.5f, 1.0f, 1.0f, 0.0f,
	.5f, -.5f, -.5f, 1.0f, 1.0f, 0.0f,
	// Triángulo trasero superior
	-.5f, -.5f, -.5f, 1.0f, 1.0f, 0.0f,
	-.5f, .5f, -.5f, 1.0f, 1.0f, 0.0f,
	.5f, .5f, -.5f, 1.0f, 1.0f, 0.0f,
	// Triángulo derecho inferior
	.5f, -.5f, .5f, 1.0f, 1.0f, 0.0f,
	.5f, -.5f, -.5f, 1.0f, 1.0f, 0.0f,
	.5f, .5f, -.5f, 1.0f, 1.0f, 0.0f,
	// Triángulo derecho superior
	.5f, -.5f, .5f, 1.0f, 1.0f, 0.0f,
	.5f, .5f, -.5f, 1.0f, 1.0f, 0.0f,
	.5f, .5f, .5f, 1.0f, 1.0f, 0.0f,
	// Triángulo izquierdo inferior
	-.5f, -.5f, .5f, 1.0f, 1.0f, 0.0f,
	-.5f, .5f, -.5f, 1.0f, 1.0f, 0.0f,
	-.5f, -.5f, -.5f, 1.0f, 1.0f, 0.0f,
	// Triángulo izquierdo superior
	-.5f, -.5f, .5f, 1.0f, 1.0f, 0.0f,
	-.5f, .5f, .5f, 1.0f, 1.0f, 0.0f,
	-.5f, .5f, -.5f, 1.0f, 1.0f, 0.0f,
	// Triángulo superior delantero
	-.5f, .5f, .5f, 1.0f, 1.0f, 0.0f,
	.5f, .5f, .5f, 1.0f, 1.0f, 0.0f,
	.5f, .5f, -.5f, 1.0f, 1.0f, 0.0f,
	// Triángulo superior trasero
	-.5f, .5f, .5f, 1.0f, 1.0f, 0.0f,
	.5f, .5f, -.5f, 1.0f, 1.0f, 0.0f,
	-.5f, .5f, -.5f, 1.0f, 1.0f, 0.0f,
	// Triángulo inferior delantero
	-.5f, -.5f, .5f, 1.0f, 1.0f, 0.0f,
	.5f, -.5f, -.5f, 1.0f, 1.0f, 0.0f,
	.5f, -.5f, .5f, 1.0f, 1.0f, 0.0f,
	// Triángulo inferior trasero
	-.5f, -.5f, .5f, 1.0f, 1.0f, 0.0f,
	-.5f, -.5f, -.5f, 1.0f, 1.0f, 0.0f,
	.5f, -.5f, -.5f, 1.0f, 1.0f, 0.0f,
	};

	glGenVertexArrays(1, &VAOCubo);
	glGenBuffers(1, &VBO);
	glGenBuffers(1, &EBO);
	// bind the Vertex Array Object first.
	glBindVertexArray(VAOCubo);

	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

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
	glClearDepth(1.0f); //Valor z-buffer
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);  // valor limpieza buffer color
	glEnable(GL_DEPTH_TEST); // z-buffer
	glDisable(GL_CULL_FACE); //ocultacion caras back
	glCullFace(GL_BACK);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	vp1();
	vp2();
	vp3();
	vp4();
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GLFW_TRUE);
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
	crearCubo();

	// Lazo de la ventana mientras no la cierre
	// -----------
	while (!glfwWindowShouldClose(window))
	{
		display();

		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glDeleteVertexArrays(1, &VAOEjes);

	glfwTerminate();
	return 0;
}
