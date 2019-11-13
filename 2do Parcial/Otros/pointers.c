#include "stdio.h"
int sinpuntero(int n);
int conpuntero(int *n);
int main()
{
	int n;
	scanf("%d",&n);

	printf("Valor del numero ingresado: %d\n",n);

	sinpuntero(n);
	printf("Usando paso por valor:  %d\n",n);

	conpuntero(&n);
	printf("Usando paso por referencia:  %d\n",n);

	return 0;
}

int sinpuntero(int n){
	n+=3;
	return n;
}

int conpuntero(int *n){
	*n+=3;
	return *n;
}