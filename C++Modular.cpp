#include <iostream>
#include <stdio.h>

using namespace std;


//Modular type of programming in C++ with OOPs

class Rectangle {
	
public:
	int length;
	int breadth;

void initialize( int l, int b){

length=l;
breadth=b;	
}
int area(){
	return length*breadth;
}
void changeLength(int l){
	length=l;
}


};

int main(){
	Rectangle r;
	r.initialize(10,20);
printf("%d %d \n",r.length,r.breadth);
int area1=r.area();
printf("%d\n",area1);
r.changeLength(50);
printf("%d %d",r.length,r.breadth);

return 0;
}

