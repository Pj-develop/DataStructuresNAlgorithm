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

};

Rectangle::Rectangle(int l, int b)
{//another way of defining outside the class
////parametrised contructor
	length=l;
	breadth=b;
}



int main(){
	Rectangle r(10,5);
	return 0;
}

