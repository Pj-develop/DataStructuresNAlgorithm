#include <iostream>
using namespace std;

template<class T>
class arithmatic{
	private:
		T a;
		T b;
	public:
//		Arithmatic(int a, int b);
//		int add();
//		int sub();
//		
	arithmatic<T>(T a, T b){
		this->a=a;
		this->b=b;
	}
	T add (){
		T c;
		c=a+b;
		return c;
		
	}
	T sub(){
		T c;
		c=a-b;
		return c;
	}
	
		
};

int main(){
	arithmatic<float> ar(10.545,5.654);
	cout<<"add : "<<ar.add()<<endl;
	cout<<"sub : "<<ar.sub()<<endl;
	return 0;
}

