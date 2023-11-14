#include<iostream>
#include<string>
using namespace std;

int main(){
	int arr[2][3]={{1,2,3},{4,5,6}};
	int *p=arr[1];
	cout<<p[2]<<" "<<arr[0][2];
}
