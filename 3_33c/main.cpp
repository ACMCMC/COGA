#include <glad.h>
#include <glfw3.h>
#include <stdio.h>
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <vector>

#include "esfera.h"

// Defino la clase ObjetoSistemaSolar

double currentTime;

void tiempo() {
	currentTime = glfwGetTime();
}

class ObjetoSistemaSolar {
public:
	glm::vec3 escalaBase = glm::vec3(0.3f, 0.3f, 0.3f);
	glm::vec3 color;
	unsigned int VAO;
	float distancia_centro;
	float velocidad_rotacion;
	float velocidad_rotacion_orbita;
	float escala;
	glm::vec3 punto_orbita;
	glm::vec3 distorsion;

	ObjetoSistemaSolar() {};

	ObjetoSistemaSolar(glm::vec3 color, float escala, float velocidad_rotacion, float velocidad_rotacion_orbita, float distancia_centro, unsigned int VAO) {
		this->color = color;
		this->velocidad_rotacion = velocidad_rotacion;
		this->velocidad_rotacion_orbita = velocidad_rotacion_orbita;
		this->distancia_centro = distancia_centro;
		this->escala = escala;
		this->VAO = VAO;
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
		return getMatTransformacionWorld() * getMatTransformacionLocal();
	}

	glm::vec3 getPosicion() {
		glm::vec3 ubicacion_dentro_de_orbita = glm::vec3(cos(currentTime * velocidad_rotacion_orbita) * distancia_centro, 0.0f, sin(currentTime * velocidad_rotacion_orbita) * distancia_centro);
		return punto_orbita + ubicacion_dentro_de_orbita;
	}

	void dibujar(unsigned int locTransform, unsigned int locColor) {
		glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
		glBindVertexArray(VAO);

		glm::mat4 matCalculada = getMatTransformacion();
		glUniformMatrix4fv(locTransform, 1, GL_FALSE, glm::value_ptr(matCalculada));
		glUniform3fv(locColor, 1, glm::value_ptr(color));
		glDrawArrays(GL_TRIANGLES, 0, 1080);
		glBindVertexArray(0);
	}
};


void processInput(GLFWwindow* window);

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 800;

extern GLuint setShaders(const char* nVertx, const char* nFrag);
GLuint shaderProgram;

unsigned int VAOEjes;
unsigned int VAOEsfera;
unsigned int VAOCuadrado;

ObjetoSistemaSolar sol, mercurio, venus, tierra, luna, iss_cuerpo_principal, iss_cuerpo_brazos, marte, jupiter, saturno, urano, neptuno;

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


	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
	glDeleteBuffers(1, &VBO);
	glDeleteBuffers(1, &EBO);

}

void crearCuadrado() {
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

	glGenVertexArrays(1, &VAOCuadrado);
	glGenBuffers(1, &VBO);
	glGenBuffers(1, &EBO);
	// bind the Vertex Array Object first.
	glBindVertexArray(VAOCuadrado);

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

	sol.dibujar(locTransform, locColor);
	mercurio.dibujar(locTransform, locColor);
	venus.dibujar(locTransform, locColor);
	tierra.dibujar(locTransform, locColor);

	glm::mat4 matTransformacionTierra = tierra.getMatTransformacion();
	luna.setPuntoOrbita(tierra.getPosicion());
	luna.dibujar(locTransform, locColor);
	iss_cuerpo_principal.setPuntoOrbita(luna.getPosicion());
	iss_cuerpo_principal.dibujar(locTransform, locColor);
	iss_cuerpo_brazos.setPuntoOrbita(iss_cuerpo_principal.getPosicion());
	iss_cuerpo_brazos.dibujar(locTransform, locColor);

	marte.dibujar(locTransform, locColor);
	jupiter.dibujar(locTransform, locColor);
	saturno.dibujar(locTransform, locColor);
	urano.dibujar(locTransform, locColor);
	neptuno.dibujar(locTransform, locColor);
}

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
	crearCuadrado();

	// ObjetoSistemaSolar(glm::vec3 color, float escala, float velocidad_rotacion, float velocidad_rotacion_orbita, float distancia_centro, unsigned int VAO)
	sol = ObjetoSistemaSolar(glm::vec3(1.0f, 1.0f, 1.0f), 0.2f, 0.5f, 0.0f, 0.0f, VAOEsfera);
	mercurio = ObjetoSistemaSolar(glm::vec3(0.48f, 0.49f, 0.5f), 0.03f, 0.5f, 2.0f, 0.1f, VAOEsfera);
	venus = ObjetoSistemaSolar(glm::vec3(0.7f, 0.7f, 0.7f), 0.03f, 0.05f, 0.3f, 0.15f, VAOEsfera);
	tierra = ObjetoSistemaSolar(glm::vec3(0.28f, 0.21f, 0.16f), 0.1f, 0.7f, 0.1f, 0.3f, VAOEsfera);
	luna = ObjetoSistemaSolar(glm::vec3(0.5f, 0.5f, 0.5f), 0.05f, 0.5f, 0.2f, 0.1f, VAOEsfera);
	iss_cuerpo_principal = ObjetoSistemaSolar(glm::vec3(0.3f, 0.3f, 0.3f), 0.05f, 0.5f, 1.0f, 0.05f, VAOCuadrado);
	iss_cuerpo_brazos = ObjetoSistemaSolar(glm::vec3(0.3f, 0.3f, 0.3f), 0.05f, 0.5f, 0.0f, 0.0f, VAOCuadrado);
	marte = ObjetoSistemaSolar(glm::vec3(0.66f, 0.14f, 0.2f), 0.08f, 1.2f, 1.2f, 4.0f, VAOEsfera);
	jupiter = ObjetoSistemaSolar(glm::vec3(0.65f, 0.61f, 0.52f), 0.15f, 5.0f, 3.0f, 0.6f, VAOEsfera);
	saturno = ObjetoSistemaSolar(glm::vec3(0.2f, 0.23f, 0.27f), 0.2f, 0.2f, 0.2f, 0.73f, VAOEsfera);
	urano = ObjetoSistemaSolar(glm::vec3(0.3f, 0.81f, 0.93f), 0.15f, 0.5f, 1.3f, 0.85f, VAOEsfera);
	neptuno = ObjetoSistemaSolar(glm::vec3(0.24f, 0.33f, 0.91f), 0.15f, 3.0f, 2.6f, 0.95f, VAOEsfera);

	iss_cuerpo_principal.distorsion = glm::vec3(0.4f, 2.0f, 0.4f);
	iss_cuerpo_brazos.distorsion = glm::vec3(1.0f, 0.5f, 0.2f);

	// Lazo de la ventana mientras no la cierre
	// -----------
	while (!glfwWindowShouldClose(window))
	{
		// input
		// -----
		processInput(window);

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

void processInput(GLFWwindow* window)
{
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);
}
