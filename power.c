#include <stdio.h>

int exp1(int n, int m){
	if(m==0){
		return 1;
	}
	else{
		return exp1(n,m-1)*n;
	}
	
}
int main(){
	int x=5;
	int y=4;
	int ans=exp1(x,y);
	printf("\n %d",ans);
	return 0;
}
