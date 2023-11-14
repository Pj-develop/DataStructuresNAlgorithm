#include<stdio.h>

struct array{
	int a[10];
	int size;
	int length;
};

int display(struct array arr){
	int i=0;
	for(i=0;i<arr.length;i++){
		printf("%d ",arr.a[i]);
		}
	return 0;
}
int main(){
	struct array ar1={{1,2,3,4,5},20,5};
	display(ar1); 
	return 0;
}
