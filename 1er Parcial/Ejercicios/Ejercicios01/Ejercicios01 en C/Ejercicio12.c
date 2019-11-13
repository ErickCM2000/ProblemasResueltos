#include "stdio.h"
int main()
{
	int num1,num2,num3,num4,MCD,divisor=1;

	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	scanf("%d",&num4);

	while((divisor<=num1)&&(divisor<=num2)&&(divisor<=num3)&&(divisor<=num4)){
		if((num1%divisor==0)&&(num2%divisor==0)&&(num3%divisor==0)&&(num4%divisor==0)){
			MCD=divisor;
		}
		divisor++;
	}

	printf("%d\n",MCD);

	return 0;
}