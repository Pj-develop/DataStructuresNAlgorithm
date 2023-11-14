#include <stdio.h>

int fibonacci(int n){
	static int i=0,j=1;
	static int r;
	if (n==0){
		printf("%d \n ",0);
		return 1;
	}
	r=fibonacci(n-1)+n;
	printf("\n %d",r);
	return n ;
	
}

int main(){
	fibonacci(5);
	return 0;
}
