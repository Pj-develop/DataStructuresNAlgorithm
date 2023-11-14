#include <iostream>
using namespace std;

class Rectangle {
	
private:
	int length;
	int breadth;

public:
	
Rectangle(){//default contructor
length=0;
breadth=0;	
}

Rectangle (int l, int b);//Header of Function or Fucntion Declaration
int area();
int getbreadth();
void changeLength(int l);
~Rectangle();

};

Rectangle::Rectangle(int l, int b)
{//another way of defining outside the class
////parametrised contructor
	length=l;
	breadth=b;
}

int Rectangle::area(){//facilitators
	return length*breadth;
}

void Rectangle::changeLength(int l){//mutator
	length=l;
}
int Rectangle::getbreadth(){//accessor
	return breadth;
}

Rectangle::~Rectangle(){
	//write code to release memory
}//Destructor

int main(){
	Rectangle r(10,5);
	cout<<r.area()<<endl;
	cout<<r.getbreadth()<<endl;
	r.changeLength(49);
	return 0;
}

