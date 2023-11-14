// You are using GCC
#include<iostream>
using namespace std;

int main(){
    
    int val,a=0,b=0,c=0;
    cin>>val;

    int temp=val;
    while(temp>1){
        if(temp%2==0) {
            temp=temp/2;
            a++;}
        if(temp%3==0) {
            temp=temp/3;
            b++;}
        if(temp%5==0) {
            temp=temp/5;
            c++;}
}
    cout<<a<<b<<c;
}