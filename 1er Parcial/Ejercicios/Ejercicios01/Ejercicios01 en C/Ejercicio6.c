#include "stdio.h"
int main()
{
	int n,i,suma=0;

	scanf("%d",&n);

	for(i=0;i<=n;i++){
		suma+=i;
	}

	printf("%d\n",suma);

	return 0;
}