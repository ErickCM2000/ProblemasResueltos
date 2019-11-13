#include <stdio.h>
#include <math.h>
int main()
{
	int num_estrellas,i;
	float distancia,menor;

	scanf("%d",&num_estrellas);
	int x[num_estrellas],y[num_estrellas];

	for (i=0;i<num_estrellas;i++)
	{
		scanf("%d",&x[i]);
		scanf("%d",&y[i]);
	}

	i=1;
	distancia=sqrt(pow(x[i]-x[i-1],2)+pow(y[i]-y[i-1],2));
	menor=distancia;

	for(i=2;i<=num_estrellas;i++){
		distancia=sqrt(pow(x[i]-x[i-1],2)+pow(y[i]-y[i-1],2));
		if(distancia<menor){
			menor=distancia;
		}
	}

	printf("%.2f\n",menor);

	return 0;
}
