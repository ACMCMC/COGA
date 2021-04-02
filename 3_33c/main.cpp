#include <glad.h>
#include <glfw3.h>
#include <stdio.h>
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "esfera.h"

// Defino la clase ObjetoSistemaSolar

class ObjetoSistemaSolar {
public:
	glm::mat4* matBase;
	glm::vec3 color;
	unsigned int VAO;
	float distancia_centro;
	float velocidad_rotacion;
	float velocidad_rotacion_orbita;
	float escala;

	ObjetoSistemaSolar(glm::vec3 color, float escala, float velocidad_rotacion, float velocidad_rotacion_orbita, float distancia_centro, unsigned int VAO) {
		this->color = color;
		this->velocidad_rotacion = velocidad_rotacion;
		this->velocidad_rotacion_orbita = velocidad_rotacion_orbita;
		this->distancia_centro = distancia_centro;
		this->escala = escala;
		this->VAO = VAO;
		matBase = NULL;
	}

	void setMatBase(glm::mat4* matBase) {
		this->matBase = matBase;
	}

	glm::mat4 getMatTransformacion() {
		glm::mat4 transform = *matBase;
		transform = glm::scale(transform, glm::vec3(escala, escala, escala));
		transform = glm::rotate(transform, (float)glfwGetTime() * velocidad_rotacion_orbita, glm::vec3(0.0f, 1.0f, 0.0f));
		transform = glm::translate(transform, glm::vec3(distancia_centro, 0, 0));
		transform = glm::rotate(transform, (float)glfwGetTime() * velocidad_rotacion, glm::vec3(0.0f, 1.0f, 0.0f));
		//transform = glm::scale(transform, glm::vec3(escala, escala, escala));
		return transform;
	}

	void dibujar(unsigned int locTransform, unsigned int locColor) {
		glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
		glBindVertexArray(VAO);

		glm::mat4 matCalculada = getMatTransformacion() * (*matBase);
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

void dibujaEjes() {
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

void dibujaEsfera() {
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

void openGlInit() {
	//Habilito aqui el depth en vez de arriba para los usuarios de linux y mac mejor arriba
	//Incializaciones varias
	glClearDepth(1.0f); //Valor z-buffer
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);  // valor limpieza buffer color
	glEnable(GL_DEPTH_TEST); // z-buffer
	glEnable(GL_CULL_FACE); //ocultacion caras back
	glCullFace(GL_BACK);

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

	dibujaEjes();
	dibujaEsfera();

	// ObjetoSistemaSolar(glm::vec3 color, float escala, float velocidad_rotacion, float velocidad_rotacion_orbita, float distancia_centro, unsigned int VAO)
	ObjetoSistemaSolar sol(glm::vec3(1.0f, 1.0f, 1.0f), 2, 0.5, 0, 0, VAOEsfera);
	ObjetoSistemaSolar mercurio(glm::vec3(0.48f, 0.49f, 0.5f), 0.1, 0.5, 2, 1.5, VAOEsfera);
	ObjetoSistemaSolar venus(glm::vec3(0.7f, 0.7f, 0.7f), 0.3, 0.3, 0.3, 2.5, VAOEsfera);
	ObjetoSistemaSolar tierra(glm::vec3(0.28f, 0.21f, 0.16f), 2, 0.7, 0.7, 3, VAOEsfera);
	ObjetoSistemaSolar luna(glm::vec3(0.5f, 0.5f, 0.5f), 0.6, 0.5, 0.2, 1, VAOEsfera);
	ObjetoSistemaSolar iss(glm::vec3(0.3f, 0.3f, 0.3f), 0.7, 0.5, 1, 0.5, VAOEsfera);
	ObjetoSistemaSolar marte(glm::vec3(0.66f, 0.14f, 0.2f), 0.2, 1.2, 1.2, 4, VAOEsfera);
	ObjetoSistemaSolar jupiter(glm::vec3(0.65f, 0.61f, 0.52f), 8, 5, 3, 6, VAOEsfera);
	ObjetoSistemaSolar saturno(glm::vec3(0.2f, 0.23f, 0.27f), 6, 0.2, 0.2, 8, VAOEsfera);
	ObjetoSistemaSolar urano(glm::vec3(0.3f, 0.81f, 0.93f), 2, 0.5, 1.3, 10, VAOEsfera);
	ObjetoSistemaSolar neptuno(glm::vec3(0.24f, 0.33f, 0.91f), 1.8, 3, 2.6, 11, VAOEsfera);

	glm::mat4 transformCentro = glm::mat4(); // Matriz identidad
	transformCentro = glm::scale(transformCentro, glm::vec3(0.2f, 0.2f, 0.2f));
	glm::mat4 transformPlanetas = glm::scale(transformCentro, glm::vec3(0.4f, 0.4f, 0.4f));

	sol.setMatBase(&transformCentro);
	mercurio.setMatBase(&transformPlanetas);
	venus.setMatBase(&transformPlanetas);
	tierra.setMatBase(&transformPlanetas);
	marte.setMatBase(&transformPlanetas);
	jupiter.setMatBase(&transformPlanetas);
	saturno.setMatBase(&transformPlanetas);
	urano.setMatBase(&transformPlanetas);
	neptuno.setMatBase(&transformPlanetas);

	// Lazo de la ventana mientras no la cierre
	// -----------
	while (!glfwWindowShouldClose(window))
	{
		// input
		// -----
		processInput(window);

		// render
		// ------
		glClearColor(0.0f, 0.0f, 0.3f, 1.0f); //Borro el Buffer the la ventana
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);



		// Medio cuadrado
		glUseProgram(shaderProgram);

		unsigned int locTransform = glGetUniformLocation(shaderProgram, "transform");
		unsigned int locColor = glGetUniformLocation(shaderProgram, "color");

		sol.dibujar(locTransform, locColor);
		//mercurio.dibujar(locTransform, locColor);
		//venus.dibujar(locTransform, locColor);
		tierra.dibujar(locTransform, locColor);

		glm::mat4 matTransformacionTierra = tierra.getMatTransformacion();
		luna.setMatBase(&matTransformacionTierra);
		glm::mat4 matTransformacionLuna = luna.getMatTransformacion();
		iss.setMatBase(&matTransformacionLuna);
		luna.dibujar(locTransform, locColor);
		iss.dibujar(locTransform, locColor);

		//marte.dibujar(locTransform, locColor);
		//jupiter.dibujar(locTransform, locColor);
		//saturno.dibujar(locTransform, locColor);
		//urano.dibujar(locTransform, locColor);
		//neptuno.dibujar(locTransform, locColor);

		// glfw: swap 
		// -------------------------------------------------------------------------------
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
