#include<iostream>
using namespace std;

int selection(int arr[],int s){
    int sm;
    for(int i=0;i<s-1;i++){
        sm=i;
        for(int j=i+1;j<s;j++){
            if(arr[j]<arr[sm]){
                sm=j;} 
        }
        swap(arr[i],arr[sm]);
        cout<<"After "<<i+1<<"pass ";
        for(int i=0;i<s;i++){
            cout<<arr[i]<<" ";
        }      
    }
return 1;

}

int main(){
    int n=5;
    int arr[n]={3,4,2,6,1};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     selection(arr,n);
    cout<<"sorted\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}