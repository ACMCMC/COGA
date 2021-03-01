/****************************************************************************
julian.flores@usc.es


El frustrum corresponde a la proyeccion
glOrtho(-100.0,100.0f,-100.0,100.0f,-100.0,100.0f);

Tareas a hacer.

Genera las mismas figuras con
Razona que pasa en cada caso.
GL_LINES
GL_LINE_STRIP
GL_LINE_LOOP
GL_TRIANGLES
GL_QUADS
GL_POLYGON

Usa la funcion glPolygonMode

******************************************************************************/

// PRÁCTICA 2B, ALDÁN CREO MARIÑO, COGA 2021



#include <windows.h>	//Inclusion de variables de windows

#include <glut.h>	//Inclusion de GLUT mira que la tienes ahi
#include <GL/gl.h>		//Inclusion de GL		 	
#include <GL/glu.h>	
#include <stdio.h>
#include <math.h>	//Inclusion de librerias auxiliares	
const int W_WIDTH = 500;	 //Ancho de la ventana
const int W_HEIGHT = 500;		//Alto de la ventana

#define GL_PI 3.14f

// Ángulos de rotación para la cámara
static GLfloat xRot = 0.0f;
static GLfloat yRot = 0.0f;

extern myCamara();

//extern void myTeclado(unsigned char tras,int x,int y);
extern void myTeclasespeciales(int cursor,int x,int y) ;

GLuint lista; // Es la lista de visualización del cubo
GLuint lista_malla; // Es la lista de visualización del cubo, pero en este caso lo que hace es dibujar su malla


/* funcion que dibuja los ejes*/
void myEjes () {

	
	
	glColor3f (0.0f,0.0f,1.0f);
	glBegin(GL_LINES);
	glVertex3f(0.0f,0.0f,0.0f);
	glVertex3f(.75f,0.0f,0.0f);
	glEnd();

	
	glColor3f (1.0f,0.0f,0.0f);
	glBegin(GL_LINES);
	glVertex3f(0.0f,0.0f,0.0f);
	glVertex3f(0.0f,.75f,0.0f);
	glEnd();

	
	glColor3f (0.0f,1.0f,0.0f);
	glBegin(GL_LINES);
	glVertex3f(0.0f,0.0f,0.0f);
	glVertex3f(0.0f,0.0,.75f);
	glEnd();

	//Diagonal
	glColor3f (1.0f,1.0f,1.0f);
	glBegin(GL_LINES);
	glVertex3f(0.0f,0.0f,0.0f);
	glVertex3f(.35f,.35,.35f);
	glEnd();
	
}
// Funcion de dibuk
void myDisplay (void) {
		

	// Clear the window with current clearing color
		
	 
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	myCamara(); // para colocar la camara por ahora nada

	
	glMatrixMode(GL_MODELVIEW); //Matriz del Modelo
	glLoadIdentity(); // Inicializamos la matriz del modelo a la identidad
	myEjes();

	glCallList(lista);
	glCallList(lista_malla);



	glFlush();
	glutSwapBuffers();
		
}	
 


int main(int argc, char **argv) {

	glutInit(&argc, argv);
	
	glutInitWindowPosition(0,0);  
	glutInitWindowSize (W_WIDTH, W_HEIGHT);
	glutInitDisplayMode (GLUT_RGBA | GLUT_DOUBLE |GLUT_DEPTH);
	glutCreateWindow("Dibuja dos cuadrados, zbuffer y caras ocultas");
	
	glClearDepth( 1.0f );
    glClearColor(0.0f,0.0f,0.0f,1.0f);


	lista = glGenLists(1);
	glNewList(lista, GL_COMPILE);

	glBegin(GL_TRIANGLES);

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-.5f, -.5f, -.5f);
	glVertex3f(.5f, -.5f, -.5f);
	glVertex3f(.5f, .5f, -.5f);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-.5f, -.5f, -.5f);
	glVertex3f(.5f, .5f, -.5f);
	glVertex3f(-.5f, .5f, -.5f);

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-.5f, -.5f, .5f);
	glVertex3f(.5f, .5f, .5f);
	glVertex3f(.5f, -.5f, .5f);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-.5f, -.5f, .5f);
	glVertex3f(-.5f, .5f, .5f);
	glVertex3f(.5f, .5f, .5f);

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(.5f, -.5f, -.5f);
	glVertex3f(.5f, -.5f, .5f);
	glVertex3f(.5f, .5f, .5f);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(.5f, -.5f, -.5f);
	glVertex3f(.5f, .5f, .5f);
	glVertex3f(.5f, .5f, -.5f);

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-.5f, -.5f, .5f);
	glVertex3f(-.5f, -.5f, -.5f);
	glVertex3f(-.5f, .5f, -.5f);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-.5f, -.5f, .5f);
	glVertex3f(-.5f, .5f, -.5f);
	glVertex3f(-.5f, .5f, .5f);

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-.5f, .5f, -.5f);
	glVertex3f(.5f, .5f, -.5f);
	glVertex3f(.5f, .5f, .5f);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-.5f, .5f, -.5f);
	glVertex3f(.5f, .5f, .5f);
	glVertex3f(-.5f, .5f, .5f);

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-.5f, -.5f, -.5f);
	glVertex3f(.5f, -.5f, .5f);
	glVertex3f(.5f, -.5f, -.5f);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-.5f, -.5f, -.5f);
	glVertex3f(-.5f, -.5f, .5f);
	glVertex3f(.5f, -.5f, .5f);

	glEnd();

	glEndList();

	lista_malla = glGenLists(1);
	glNewList(lista_malla, GL_COMPILE);

	glBegin(GL_LINE_LOOP);

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-.5f, -.5f, -.5f);
	glVertex3f(.5f, -.5f, -.5f);
	glVertex3f(.5f, .5f, -.5f);

	glVertex3f(-.5f, -.5f, -.5f);
	glVertex3f(.5f, .5f, -.5f);
	glVertex3f(-.5f, .5f, -.5f);

	glVertex3f(-.5f, -.5f, .5f);
	glVertex3f(.5f, .5f, .5f);
	glVertex3f(.5f, -.5f, .5f);

	glVertex3f(-.5f, -.5f, .5f);
	glVertex3f(-.5f, .5f, .5f);
	glVertex3f(.5f, .5f, .5f);

	glVertex3f(.5f, -.5f, -.5f);
	glVertex3f(.5f, -.5f, .5f);
	glVertex3f(.5f, .5f, .5f);

	glVertex3f(.5f, -.5f, -.5f);
	glVertex3f(.5f, .5f, .5f);
	glVertex3f(.5f, .5f, -.5f);

	glVertex3f(-.5f, -.5f, .5f);
	glVertex3f(-.5f, -.5f, -.5f);
	glVertex3f(-.5f, .5f, -.5f);

	glVertex3f(-.5f, -.5f, .5f);
	glVertex3f(-.5f, .5f, -.5f);
	glVertex3f(-.5f, .5f, .5f);

	glVertex3f(-.5f, .5f, -.5f);
	glVertex3f(.5f, .5f, -.5f);
	glVertex3f(.5f, .5f, .5f);

	glVertex3f(-.5f, .5f, -.5f);
	glVertex3f(.5f, .5f, .5f);
	glVertex3f(-.5f, .5f, .5f);

	glVertex3f(-.5f, -.5f, -.5f);
	glVertex3f(.5f, -.5f, .5f);
	glVertex3f(.5f, -.5f, -.5f);

	glVertex3f(-.5f, -.5f, -.5f);
	glVertex3f(-.5f, -.5f, .5f);
	glVertex3f(.5f, -.5f, .5f);

	glEnd();

	glEndList();
	
	glEnable(GL_CULL_FACE); // Habilita la ocultacion de caras
	glEnable(GL_NORMALIZE);

	//Eventos comentado hasta la siguiente practica
	/*glutKeyboardFunc(myTeclado);*/
	glutSpecialFunc(myTeclasespeciales);
	glutDisplayFunc(myDisplay);
	
	// Empieza en bucle principal
	glutMainLoop();
	return 0;
}