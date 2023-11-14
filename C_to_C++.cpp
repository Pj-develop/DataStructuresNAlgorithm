#include <iostream>
#include <stdio.h>

using namespace std;


//Modular type of programming in C

struct Rectangle {
	int length;
	int breadth;
};

void initialize( struct Rectangle *r, int l, int b){

r->length=l;
r->breadth=b;	
}
int area(struct Rectangle r){
	return r.length*r.breadth;
}
void changeLength(struct Rectangle *r, int l){
	r->length=l;
	
}
int main(){
	struct Rectangle r;
initialize(&r,10,20);
printf("%d %d \n",r.length,r.breadth);
int area1=area(r);
printf("%d\n",area1);
changeLength(&r,50);
printf("%d %d",r.length,r.breadth);


return 0;
//	int lenght=0,breadth=0;
//	printf("Enter Length and Breadth");
//	cin>>length>>breadth;
//	
//	int area=
}
