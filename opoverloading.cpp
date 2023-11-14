#include<iostream>
using namespace std;


class urinary{
    public:
    int real;
    int img;
    //urinary(int n): n(n) {};

    void input(int n, int j){
        this->real=n;
        this->img=j;
    }

    void operator++(){
        this->real=real-1;
        
    }

    void operator++(int){
        this->img=img+5;
    }

    urinary operator+(urinary other){
        urinary temp;
        temp.real=real-other.real;
        temp.img=img-other.img;
        return temp;
    }

};
int main(){
    
    urinary op1;
    urinary op2;
    op1.input(5,6);
    op2.input(6,7);
    // ++op1;
    // op1++;    
    // cout<<op1.real<<endl;
    urinary d3;
    d3=op1+op2;
    cout<<d3.real<<" "<<d3.img;



}