#include "stdio.h"
int main()
{
	float n,i,suma=0;
	int aprobados,reprobados;
	n=0;

	while((n>=0)&&(n<=10)){
		scanf("%f",&n);
		if (n>=6)
		{
			aprobados++;
			suma+=n;
			i++;
		}
		if((n<6)&&(n>=0)){
			reprobados++;
			suma+=n;
			i++;
		}
	}

	printf("%f\n",suma/i);
	printf("%d\n",aprobados);
	printf("%d\n",reprobados);

	return 0;
}