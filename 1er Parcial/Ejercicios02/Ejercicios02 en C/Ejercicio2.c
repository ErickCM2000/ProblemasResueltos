#include <stdio.h>
int main()
{
	int longarr,i,numeros[100],num;

	scanf("%d",&longarr);

	for(i=0;i<=longarr;i++){
		scanf("%d",&num);
		numeros[i]=num;
	}
	printf("\n\n");

	for(i=longarr;i>=0;i--){
		printf("%d\n",numeros[i]);
	}
	
	return 0;
}
