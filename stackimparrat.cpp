#include<iostream>
using namespace std;

//stack using array
// You are using GCC

class Stack{
    public:
  int S1[100]={-1};
  int tos=0;
  
  
  void push(int n){
      if(tos<101){
      S1[tos]=n;
      tos++;
      cout<<"Element "<<n<<" pushed onto the stack.\n";
      }
      else{
        cout<<"Stack Overflow. Cannot perform the push operation.\n"; 
          
      }
      
  }
  
  void pop(){
      int pop;
      if(tos>0){
      pop=S1[tos-1];
      S1[tos]=0;
      cout<<"Element "<<pop<<" popped from the stack.\n";
      tos--;
      
      }
      else{
        cout<<"Stack Underflow. Cannot perform the pop operation.\n";          
      }
      
  }
  void display(){
    if(tos>0){
        cout<<"Elements in the stack: ";
      for(int i=tos-1;i>=0;i--){
          cout<<S1[i]<<" ";
      }
      cout<<endl;
    }
    else{
        cout<<"Stack is empty.\n";

    }
  }
};

int main(){
    int opt;
    class Stack stack;
    while(true){
        cin>>opt;
        if(opt==1){
            int n;
            cin>>n;
            stack.push(n);
            
        }
        else if(opt==2){
            stack.pop();
        }
        else if(opt==3){
            stack.display();
        }
        else if(opt==4){
            cout<<"Exiting the program.\n";
            break;
        }
        else{
            cout<<"Invalid choice.\n";

        }
        
    };
    
}