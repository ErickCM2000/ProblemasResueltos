#include <stdio.h>
int main()
{
	int a,b,aux1,aux2,mayor,area;
	scanf("%d",&a);
	scanf("%d",&b);
	if((a<100)&&(b<100)){
    	aux1=a;
    	aux2=b;
    	mayor=0;

    	while(aux1<=aux2){
    		area=(100-2*aux1)*(aux1);
    		if(area>mayor){
    			mayor=area;
    			a=aux1;
    		}
    		aux1++;
    	}
    	printf("%d\n",mayor);
    	printf("%d\n",a);
	}
	return 0;
}