#include "stdio.h"
int serie(int);
int main()
{
	int n,valserie,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		valserie+=serie(i);
	}
	printf("%d\n",valserie);
	return 0;
}

int serie(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 2;
	}
	else{
		return(serie(n-1)+2);
	}
}
