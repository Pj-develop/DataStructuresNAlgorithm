#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //write
    ofstream f_out("write.txt");
    if(f_out.is_open()){
        cout<<"File is opened"<<endl;
    }
    else{
        cout<<"not OPened"<<endl;
    }
    f_out<<"Hello World2 "<<endl;
    f_out.close();

    //read
    string s1;
    ifstream f_in("read.txt");
    f_in>>s1;//word wise delimiter space
    getline(f_in,s1); //line was
    char s2[10];
    f_in.read(s2,5); //char by char

    cout<<s2;
f_out.close();

    fstream file1;
    file1.open("sample1.txt",ios:: trunc | ios::out | ios :: in);
    file1.seekg(0,ios::beg);    //point read pointer at the begninign





}