// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;

int main()
{
	//Creamos una ventana
	GLFWwindow *window;

	//Si no puede inicializar glfw
	//Iniciamos ejecucion
	if (!glfwInit()) {
		exit(EXIT_FAILURE);

	}

	window = glfwCreateWindow(1024, 768, "Ventana", NULL, NULL);

	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window)); {

		//Wstablece region del dibujo
		glViewport(0, 0, 1024, 768);
		//Establecer el color borrado
		glClearColor(1, 0.8, 0, 1);
		//Borramos
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo

		//Cambiar los buffers
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();

	}


    return 0; 
}

