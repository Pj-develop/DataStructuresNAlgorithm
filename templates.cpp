#include <iostream>
using namespace std;

//template<class T>

class arithmatic{
	private:
		int a;
		int b;
	public:
//		Arithmatic(int a, int b);
//		int add();
//		int sub();
//		
	arithmatic(int a, int b){
		this->a=a;
		this->b=b;
	}
	int add(){
		int c;
		c=a+b;
		return c;
		
	}
	int sub(){
		int c;
		c=a-b;
		return c;
	}
	
		
};

int main(){
	arithmatic ar(10,5);
	cout<<"add"<<ar.add()<<endl;
	cout<<"sub"<<ar.sub()<<endl;
	return 0;
}

