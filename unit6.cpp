#include<iostream>
#include<exception>
using namespace std;


struct Myerror: public exception{
const char *what() const throw(){
    return " Mera Type Ka error hoon mai";
}

};

int main(){

    //div by 0

//     float q,r,div,did;
//     cout<<"Enter 2 digit two divide : ";
//     cin>>did>>div;
//   try{
//         if(div==0){
//             throw " Division By 0";
//         }
//         else{
//             cout<<"\nAnswer is "<<did/div<<endl;
//         }
//     }
//     catch(const char* msg){
//         cerr<<msg<<endl;
//     }

    float q,r,div,did;
    cout<<"Enter 2 digit two divide : ";
    cin>>did>>div;
    try{
        if(div==0){
            throw Myerror();
        }
        else{
            cout<<"\nAnswer is "<<did/div<<endl;
        }
    }
    catch(Myerror& e){
        cout<<"My error caught";
        cout<<e.what()<<endl;
    }
    catch(exception& e2){
        
    }
}