#include<iostream>
#include <string>
using namespace std;

union doubt{
  int h;
  string dob="24/05/2003";
};
int main(){
    union doubt dikkat;
//    dikkat.dob={"24/05/2003"};
    cout<<dikkat.dob;
    return 0;
}
