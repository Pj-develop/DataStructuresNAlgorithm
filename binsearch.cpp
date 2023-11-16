#include<iostream>
using namespace std;

bool binsearch(int arr[],int n,int key){
    int s=0,e=n-1;
    while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==key) return true;
    if(key>arr[mid]){    s=mid+1;
    }
    else{ 
        e=mid-1;
    }
}
return false;
    
}

int main(){
    int n=5;
    int arr[n]={10 ,20,30,40,50};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

     if(binsearch(arr,n,40)){
        cout<<"element found";
     }
     else{
        cout<<"Not found";
     }


    // for(int i=0;i<5;i++){
    //     cout<<arr[i];
    // }

}