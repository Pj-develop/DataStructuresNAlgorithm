#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//quicksort

void swap(int *x,int *y)
{
int temp=*x;
*x=*y;
*y=temp;
}

int partition(int arr[],int l, int h){
    int i=l,j=h;
    int pivot=arr[l];
    do{
        do{i++;} while(arr[i]<=pivot); 
        do{j++;} while(arr[j]>pivot);
    
        if(i<j) swap(&arr[i],&arr[j]);
    }while(i<j);
    swap(&arr[i],&arr[j]);
    return j;

}

void QuickSort(int a[],int l,int h){
    int j;
    if(l<h){
        j=partition(a,l,h);
        QuickSort(a,l,h);
        QuickSort(a,j+1,h);
    }

}


int main(){
    int A[]={10,50,40,30,20,100}, n=5,i;

    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    QuickSort(A,n,1);


    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}