
/*****************************************************

Julian.flores@usc.es

Programas demo para clase -I

*************************************************************/


#include <windows.h>	//Inclusion de variables de windows
#include <glut.h>	//Inclusion de GLUT
#include <GL/gl.h>	//Inclusion de GL		 	
#include <GL/glu.h>	
#include <stdio.h>
#include <math.h>	//Inclusion de librerias auxiliares	


#define INCREMENTO .05
#define DISTANCIA 1
#define PI 3.1416


float alpha=0;
float beta =0;


void myCamara() {
		
	/**/
	glMatrixMode(GL_PROJECTION);//Configuración de la matriz de proyeccion
	glLoadIdentity(); 
	glOrtho(-1.0, 1.0f, -1.0, 1.0f, .1, 10.0f);    //proyeccion ortografica
	
	gluLookAt(((float)DISTANCIA*(float) sin(alpha)*cos(beta)),((float)DISTANCIA*(float) sin(beta)), ((float)DISTANCIA*cos(alpha)*cos(beta)), 0,0,0,0,1,0);  

	
}

void myTeclado(unsigned char tras,int x,int y)
{
	switch (tras) {
	case 'l':
		
	break;
	case 'c':
			break;
	case 'r':
			break;
	case 'p':
		
	break;
	
	default:
	break;
	}
// Se se modificou algo redebúxase
  glutPostRedisplay();
}

/**************************************
FUNCION DE CONTROL DE TECLAS ESPECIAIS:
**************************************
*/
 void myTeclasespeciales(int cursor,int x,int y) 
{
	switch(cursor) 
	{
//Traslaciones:
		case GLUT_KEY_F1:
	   		break;
		case GLUT_KEY_F2:
	
		break;
		case GLUT_KEY_F3:
			
		break;
		case GLUT_KEY_F4:
						break;
		case GLUT_KEY_F5:
			
		break;
		case GLUT_KEY_F6:
		
		break;
//Giros:
		case GLUT_KEY_UP:
			beta+=INCREMENTO;
			break;
		case GLUT_KEY_DOWN:
			beta-=INCREMENTO;
			break;
		case GLUT_KEY_RIGHT:
			alpha-=INCREMENTO;
			break;
		case GLUT_KEY_LEFT:
			alpha+=INCREMENTO;
			break;
		default:
			break;
	}

	if(alpha >= PI *2.0 && alpha<=0 ) alpha=0;
	if(beta>=PI*2.0 && beta<=0 ) beta=0; //hay que repasarlo para evitar el salto


		glutPostRedisplay();
}