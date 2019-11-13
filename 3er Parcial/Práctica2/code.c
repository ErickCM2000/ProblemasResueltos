/*
AUTOR: Castañeda Martínez Erick y Vicencio Benítez Sergio Erick
VERSIÓN: 1.0 

DESCRIPCIÓN: Programa que utiliza algunas funciones de las librerías creadas para la conversión 
		     unidades.

OBSERVACIONES: 
El programa utiliza una varias funciones incluidas en el proyecto, recibe un entero y pasa hace uso
del paso de parámetros por valor para 

COMPILACIÓN: gcc code.c -o code

EJECUCIÓN: (Windows) code
*/

//Macros del preprocesador
#include <stdio.h>
//Librerías propias del proyecto
#include "longitud.h"
#include "longitud.c"
#include "superficie.h"
#include "superficie.c"
#include "volumen.h"
#include "volumen.c"
#include "masa.h"
#include "masa.c"
#include "densidad.h"
#include "densidad.c"
#include "presion.h"
#include "presion.c"
#include "energia.h"
#include "energia.c"
#include "potencia.h"
#include "potencia.c"
//Función main
int main()
{
	double num;
	printf("\n\t*** Practica #2 ***\n");	
	printf("\n\t-Prueba de algunas librerias de conversion de unidades:");
	printf("\n\t-Ingresa un numero mayor a cero para empezar: \n");
	scanf("%lf",&num);

	printf("\n\t*De la libreria -longitud.h-\n");
	printf("\n\t\t-> %lf centimetros equivalen a %lf metros",num,cmametro(num));

	printf("\n\n\t*De la libreria -superficie.h-\n");
	printf("\n\t\t-> %lf metros cuadrados equivalen a %lf millas",num,sqmamilla(num));
	
	printf("\n\n\t*De la libreria -volumen.h-\n");
	printf("\n\t\t-> %lf pies cubicos equivalen a %lf galones",num,cubpiagalon(num));

	printf("\n\n\t*De la libreria -masa.h-\n");
	printf("\n\t\t-> %lf gramos equivalen a %lf toneladas metricas",num,gatonm(num));

	printf("\n\n\t*De la libreria -densidad.h-\n");
	printf("\n\t\t-> %lf libras entre galon %lf kilogramos entre galon",num,lbgakgmc(num));

	printf("\n\n\t*De la libreria -presion.h-\n");
	printf("\n\t\t-> %lf libras entre pulgada cuadrada equivalen a %lf dinas entre centimetro cuadrado",num,pulgcadincm(num));

	printf("\n\n\t*De la libreria -energia.h-\n");
	printf("\n\t\t-> %lf joules equivalen a %lf libras pie",num,jalbft(num));

	printf("\n\n\t*De la libreria -potencia.h-\n");
	printf("\n\t\t-> %lf watts a %lf kilowatts",num,wakw(num));	
	printf("\n\n");

	return 0;
}

