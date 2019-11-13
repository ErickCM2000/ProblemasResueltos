#include <stdio.h>
int main()
{
	int segundos,min,seg;

	scanf("%d",&segundos);
	min=segundos/60;
	seg=segundos%60;

	printf("%d\n",min);
	printf("%d\n",seg);

	return 0;
}