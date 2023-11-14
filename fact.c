#include<stdio.h>

int fun(int n){
	if(n==1){
		return 1;
	}
	else{
		return (fun(n-1)*n);	
	}
}

int main(){
	int x=5;
	printf("%d",fun(x));
	return 0;
	
}
