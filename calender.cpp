// You are using GCC
#include<iostream>
using namespace std;

class Date{
    public:
    int dd,mm,yy;
    Date(){
    this->dd=31; 
    this->mm=12; 
    this->yy=2022;
    cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
    }
    
    Date(int dd,int mm,int yy){
        
        if(dd>0 && dd<32){
            this->dd=dd;
        }
        else{
            this->dd=30;
        }
        if(mm>12){
            this->mm=mm-12;
        }
        else{
            this->mm=mm;
        }
        if(yy>2022 && yy<2999){
            this->yy=yy;
        }
        else{
            this->yy=2023;
        }

    }
    void display(){
        cout<<dd<<"-"<<mm<<"-"<<yy;
    }

        
    };

int main(){
    int d,m,y;
    cin>>d>>m>>y;
    Date c1;
    c1=Date(d,m,y);
    c1.display();
}