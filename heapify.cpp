#include<iostream>
using namespace std;


class Heap{
public:
    int *root=NULL;


    // void insert(int arr[],int index){
    //     int i=index,temp;
    //     temp=arr[i];
        
    //     while(i>1 && temp>arr[i/2]){
    //         arr[i]=arr[i/2];
            

    //     }

    // }


};


int main(){

    int arr[6]={0,4,21,745,1,2};
    int size=6;
    Heap heap;
    heap.insert(arr,3);
}   