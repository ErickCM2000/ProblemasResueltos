#include <stdio.h>
#include <string.h>
 
int main(int argc, char const *argv[])
{
	int arreglo[10] = {1,2,3,123, 456};
 
	// Memoriay ocupada por todo el arreglo
	int tamanioDelArreglo = sizeof(arreglo);
 
	// Memoria ocupada por su primer elemento
	int tamanioDeLaPrimeraVariableDelArreglo = sizeof(arreglo[0]);
 
	// División simple
	int longitud = tamanioDelArreglo / tamanioDeLaPrimeraVariableDelArreglo;
	printf( "El arreglo ocupa %d bytes.\n"
			"La primer variable ocupa %d bytes.\n"
			"Entonces la longitud es: %d", 
			tamanioDelArreglo, tamanioDeLaPrimeraVariableDelArreglo, longitud);

	printf("%d",strlen(arreglo[03]));

	return 0;
}