#include <stdio.h>

//int pow1(int m,int n){
//	if(n==0){
//		return 1;
//	}
//	else{
//		return (pow1(m,n-1)*m);
//	}
//	
//}
//
//int fact(int x){
//	if (x==0){
//		return 1;
//	}
//	else{
//		return (fact(x-1)*x);
//	}
//}



double e(int m,int n){
	
	static double p=1,f=1;
	double r;
	if(n==0){
		return 1;
	}
		r=e(m,n-1);
		p=p*m;
		f=f*n;
		return r+ p/f;		
//		return(1+(pow1(m,n)/fact(m)));
	}
	
	
int main(){
	int m=3,n=3;
	double y=e(1,10);
	printf("%lf  \n",e(1,10));
	return 0;
	
}
