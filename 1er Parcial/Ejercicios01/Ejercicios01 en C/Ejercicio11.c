#include "stdio.h"
int main()
{
	int n,i,suma=0;

	scanf("%d",&n);
	
	for(i=n;i<=n+10;i++){
		suma+=(i*i);
	}

	printf("%d\n",suma);

	return 0;
}