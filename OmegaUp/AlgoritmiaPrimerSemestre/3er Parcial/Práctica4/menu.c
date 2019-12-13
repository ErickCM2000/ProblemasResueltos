#include "stdio.h"
int main(int argc, char const *argv[])
{
	char resp;


	do{
		printf("programa que hace cosas\n");

		printf("si quieres repetir el programa presiona 's'\n");
		scanf("%s",&resp);
		}
	while((resp=='s')||(resp=='S'));

	return 0;
}