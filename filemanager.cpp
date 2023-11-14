#include<iostream>
#include<fstream>
using namespace std;

class FileManager{
    public:

    ofstream myfile;

    FileManager(){
        cout<<"classes called";
    }
};

int main(){

FileManager myfilemanager=FileManager();


}