#include <stdio.h>

int fun1(int n){
	int sum=0;
	if (n<1){//termination
		return 0;
	}
	else{
	return fun1(n-1)+n;	
	}
}

int main(){
	int x=3;
	int sum1;
	sum1=fun1(x);
	printf("\n sum is %d",sum1);
	return 0;
}


//use forumual : n(n+1)/2
