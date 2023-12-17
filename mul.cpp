#include<iostream>
using namespace std;

int main(){
    int mul=1;
    string s="135";
    int size=s.size();
    for(int i=0;i<s.size();i++){
        int n=s[i]-'0';
        cout<<n<<endl;
        mul*=n;


    }
    cout<<"ANS : "<<mul;
}
