#include<iostream>
using namespace std;


void quicksort(int arr[],int low, int high){
    if(low<high){
        int pivot=arr[high];
        int i=low-1;
        for(int j=low;j<high;j++){
            if(arr[j]>pivot){
                i++;
                swap(arr[i],arr[j]);
            }
            
        }
        swap(arr[i+1],arr[high]);
        quicksort(arr,low,high);
        quicksort(arr,i+2,high);
    }
}

int main(){
    int arr[5]={4,3,1,2,5};
    int size=5;
    //quicksort(arr,0,4);
    // int i=0,j=2;
    // swap(i,j);
    // cout<<i<<j;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\nafter sort;\n";
    quicksort(arr,0,size-1);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
