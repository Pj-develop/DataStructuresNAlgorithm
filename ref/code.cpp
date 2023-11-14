// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;
class Tcs{
    public:
    void calculateTotalPrice(){
        int i;
        float price,disc,qty;
        cin>>i;
           switch(i){
                case 1:
                    cin>>price;
                    
                case 2:
                    cin>>price;
                    cin>>qty;
                 case 3:
                    cin>>price;
                    cin>>qty;
                    cin>>disc;
                case 4:
                    cout<<"Invalid choice! Please try agian.";
                    break;
                };
    
            }
        
    };

int main(){
    Tcs obj;
    obj.calculateTotalPrice();
    
}