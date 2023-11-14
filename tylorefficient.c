#include <stdio.h>

double e(int m,int n){
	//1=x/1)1+x/2)1+x/3
	static double r; 
	if (n==0){
		return r;
	}	
	r=1+m*r/n;
	
	return e(m,n-1);
}
//loop

double lop(m,n){
	double i=1,j=1,r=0;
	while (n>0){
		r=(double)1+(double)m/(double)n*(double)r;
		n--;		
	}
	return r;

}

int main(){
	int x=1,y=10;
	printf("\n Tylor sum is (eX)= %lf",e(x,y));
	return 0;
}




