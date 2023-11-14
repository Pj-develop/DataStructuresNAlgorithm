#include<iostream>
using namespace std;


class Heap{
public:
    int *root=NULL;
    void heapify(int arr[],int n, int i){
        int largest=i;
        int left=i*2;
        int right=i*2+1;
        if(left<=n && arr[left]<arr[largest]){
            largest=left;
           }
        if(right<=n && arr[right]< arr[largest]){
            largest=right;
           }
        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
     }

     void buildheap(int arr[],int n){
        for(int i=n/2;i>0;i--){
            heapify(arr,n,i);
    
       }
     }

};


int main(){

    int arr[7]={0,10,30,50,20,35,15};
    int size=7;
    Heap heap;
    heap.buildheap(arr,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}   