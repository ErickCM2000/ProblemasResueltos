#include "stdio.h"
int fibonacci(int);
int main()
{
	int n,i;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("%d\n",fibonacci(i));
	}

	return 0;
}

int fibonacci(int n){
	if((n==0)||(n==1)){
		return 1;
	}
	else{
		return(fibonacci(n-1)+fibonacci(n-2));
	}
}

