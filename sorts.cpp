#include<iostream>

using namespace std;


void printarray(int arr[],int size){
for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void inserts(int arr[], int s){
    for(int i=0; i<s; i++){
        int x=arr[s-1];
        int j=s-2; 
        while(j!=-1 && arr[j]<x){
            arr[j+1]=arr[j];
            j--;
    }
    arr[j+1]=x;
        }
    cout<<"updating array";
    printarray(arr,5)
}


int main(){
    int n;
    // cout<<"SIZE ";cin>>n;
    int a[5]={5,4,7,1,3};
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    cout<<"ARRAY IS : ";
    printarray(a,5);

    inserts(a,n)s;
    


    return 0;
}