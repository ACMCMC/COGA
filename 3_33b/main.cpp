#include <glad.h>
#include <glfw3.h>
#include <stdio.h>
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "esfera.h"

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

	// Lazo de la ventana mientras no la cierre
	// -----------
	while (!glfwWindowShouldClose(window))
	{
		// input
		// -----
		processInput(window);

		// render
		// ------
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f); //Borro el Buffer the la ventana
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);



		// Medio cuadrado
		glUseProgram(shaderProgram);

		glm::mat4 transformCentro;
		glm::mat4 transformAtomos;
		glm::mat4 transformAtomo1;
		glm::mat4 transformAtomo2;
		glm::mat4 transformAtomo3;

		unsigned int locTransform = glGetUniformLocation(shaderProgram, "transform");

		transformCentro = glm::mat4(); // Matriz identidad
		transformCentro = glm::scale(transformCentro, glm::vec3(0.15f, 0.15f, 0.15f));
		transformAtomos = glm::scale(transformCentro, glm::vec3(0.65f, 0.65f, 0.65f));
		
		transformAtomo1 = glm::rotate(transformAtomos, (float)glfwGetTime(), glm::vec3(0.0f, 1.0f, 0.0f));
		transformAtomo1 = glm::translate(transformAtomo1, glm::vec3(8.0f, 0.0f, 0.0f));

		transformAtomo2 = glm::rotate(transformAtomos, 45.0f, glm::vec3(0.0f, 0.0f, 1.0f));
		transformAtomo2 = glm::rotate(transformAtomo2, (float)glfwGetTime()+120.0f, glm::vec3(0.0f, 1.0f, 0.0f));
		transformAtomo2 = glm::translate(transformAtomo2, glm::vec3(8.0f, 0.0f, 0.0f));

		transformAtomo3 = glm::rotate(transformAtomos, -45.0f, glm::vec3(0.0f, 0.0f, 1.0f));
		transformAtomo3 = glm::rotate(transformAtomo3, (float)glfwGetTime()-120.0f, glm::vec3(0.0f, 1.0f, 0.0f));
		transformAtomo3 = glm::translate(transformAtomo3, glm::vec3(8.0f, 0.0f, 0.0f));

		glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
		glBindVertexArray(VAOEsfera);

		glUniformMatrix4fv(locTransform, 1, GL_FALSE, glm::value_ptr(transformCentro));
		glDrawArrays(GL_TRIANGLES, 0, 1080);

		glUniformMatrix4fv(locTransform, 1, GL_FALSE, glm::value_ptr(transformAtomo1));
		glDrawArrays(GL_TRIANGLES, 0, 1080);

		glUniformMatrix4fv(locTransform, 1, GL_FALSE, glm::value_ptr(transformAtomo2));
		glDrawArrays(GL_TRIANGLES, 0, 1080);

		glUniformMatrix4fv(locTransform, 1, GL_FALSE, glm::value_ptr(transformAtomo3));
		glDrawArrays(GL_TRIANGLES, 0, 1080);

		glBindVertexArray(0); // no need to unbind it every time 


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
