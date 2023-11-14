#include<iostream>
using namespace std;


void printa(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}

void sortInsertion(int arr[],int size)
{

    for(int i=1;i<size;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while (j>-1 && temp<arr[j])
        {
            /* code */

        }
        
    }
}


int main(){

int arr1[5]={3,2,1,5,4};
int size=5;
cout<<"NOT SORTED : ";
printa(arr1,size);
cout<<"\nSORTED : ";
sortInsertion(arr1,size);
printa(arr1,size);


//sṇṇ
}
