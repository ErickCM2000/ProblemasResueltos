#include <stdio.h>
#include <math.h>

int main()
{
    int bin,conversion=0,exponente=0;
    scanf("%d",&bin);
    
    while(bin>0){
    	
		if(bin%2==1){
			conversion=conversion+pow(2,exponente);
		}
		exponente++;
		bin=bin/10;
	}
    printf("%d\n",conversion);
    return 0;
}   
