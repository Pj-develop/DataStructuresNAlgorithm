#include<iostream>
#include<cmath>
using namespace std;

int c;
int TOH(int n,char src, char aux, char dest){
    if(n==0){
        return 0;
    }
    TOH(n-1,src,dest,aux);
    cout<<"Move Disk "<<n<<" From Rod "<<src<<" to Rod "<<dest<<"<---------"<<endl;;
    TOH(n-1,aux,dest,src);
    c++;
    return c;


}

int main(){
    int n=3;
    cout<<pow(2,n)-1<<endl;
    cout<<TOH(n,'A','B','C');

    //no.of moves == 2^n-1


}