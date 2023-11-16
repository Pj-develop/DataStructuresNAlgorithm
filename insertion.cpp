#include<iostream>
using namespace std;

int insertion(int arr[],int s){
    
    for(int i=1;i<s;i++){
        int tmp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>tmp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=tmp;
    }
return 1;

}

int main(){
    int n=5;
    int arr[n]={42,21,10,15,13};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     insertion(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}