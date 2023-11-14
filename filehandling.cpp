#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out_file("hello.txt",ios::trunc);
    out_file<<"hello i am a file";
    out_file.close();
    ifstream inp_file("hello.txt");
    string h,i,j;
    inp_file>>h>>i>>j; //reading string sep by space
    inp_file.close();
    cout<<h<<i<<j;
    
}