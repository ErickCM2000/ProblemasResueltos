#include <stdio.h>
#define PI 3.1416
int main()
{
	float radio,perimetro,area;

	scanf("%f",&radio);

	perimetro=2*PI*radio;
	area=PI*radio*radio;

	printf("%f \n",perimetro);
	printf("%f \n",area);
	return 0;
}