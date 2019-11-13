#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,i,mayor=0,j,suma;

	scanf("%d",&n);
	int numeros[n];

	for(i=0;i<n;i++){ 
		scanf("%d",&numeros[i]);
	}

	mayor=0;
	j=i+1;

	for(i=0;i<n;i++){
		for(j;j<n;j++){
			suma+=numeros[j];
			if(suma>mayor){
				mayor=suma;
			}
		}
		j=i+1;
		suma=numeros[i];
	}

	printf("%d",mayor);

	return 0;
}