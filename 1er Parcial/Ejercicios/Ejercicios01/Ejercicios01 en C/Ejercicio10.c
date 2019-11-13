#include "stdio.h"
int main()
{
	int numeros[100],i=0,n,no=0,j;

	scanf("%d",&numeros[i]);
	if(numeros[i]!=0){
		
		while(numeros[i]!=0){
			i++;
			scanf("%d",&numeros[i]);
			n++;
		}

		for(i=0;i<n-1;i++){

			for(j=2;j<numeros[i];j++){
				if(numeros[i]%j==0){
					no++;
					break;
				}
			}
			if((no==0)&&(numeros[i]!=1)){
				printf("S\n");
			}else{
				printf("N\n");
				no=0;
			}

		}		
	}




	return 0;
}