#include "stdio.h"
int main()
{
	int i=2,num;
	scanf("%d",&num);

	while(num!=1){
		if(num%i==0){
			printf("%d\n",i);
			num=num/i;
		}
		else{
			i++;
		}
	}

	return 0;
}