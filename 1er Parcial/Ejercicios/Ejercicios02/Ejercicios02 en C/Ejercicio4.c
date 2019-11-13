#include <stdlib.h>
#include <stdio.h>
#include "string.h"

int main()
{
	int i,num,incremento,cifrado;
	char cifrar[100];
	scanf("%s",&cifrar);
	scanf("%d",&incremento);
	printf("%s\n",cifrar);

	for(i=0;i<strlen(cifrar);i++){
		num=(cifrar[i]-'0')+incremento;
		printf("%d",num);
	}

}