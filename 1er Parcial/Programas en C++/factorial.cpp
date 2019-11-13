#include "iostream"
using namespace std;
int factorial(int n);
int main(){
	int n,fac;
	cin>>n;
	fac=factorial(n);
	cout<<fac;
	return 0;
}
int factorial(int n){
	if(n==0){
		return 1;
	}

	else{
		return(n*factorial(n-1));
	}
}
