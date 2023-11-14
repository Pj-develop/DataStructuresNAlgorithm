#include <iostream>
using namespace std;
float bulbul(double arr[],int size){
    int temp=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<(size-i);j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
        
    }
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i]<<" ";}
    
    return 0;
}

int main(){
    int n=5;
    // cin>>n;
    double arr[n]={231,132,552,124,178};
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    bulbul(arr,n);
}