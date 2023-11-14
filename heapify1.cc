#include<iostream>
using namespace std;

//manual inserrtion O{nlogn)

class Heap{
public:
    int heapSize=0;
     void insert(int arr[],int n){
        int i=n;
        while(i>0 && arr[(i-1)/2]>arr[i]){
            swap(arr[i],arr[(i-1)/2]);
            i=(i-1)/2;
        }
       heapSize++; 
       }
    
     

};


int main(){

    int arr[6]={0,3,5,2,6,8};
    int size=5;
    Heap heap;
    heap.insert(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}   