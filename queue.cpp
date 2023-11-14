#include<iostream>
using namespace std;

class Queue{
public:
int front; int rear; int cap;
int *arr;
int size;

Queue(int size){
    this->size=size;
    this->arr=new int[size];
    this->front=-1;
    this->rear=-1;

}

void enQueue(int data){
    if(cap<size){
        cout<<"Stack Overflow";
    }
    else if(front==-1 & rear==-1){
        arr[++rear]=data;
        front++;
    }
    else{
        arr[++rear]=data;
    }
}

void deQueue(){
    if(isEmpty){
        cout<<"Queue is Empty"
    }
    int out =arr[front++];
    cout<<out<<" has bee deQueued !!";
}

bool isEmpty(){
    if(this->front==-1 && this->rear==-1){
        return true;
    } 
    return false;
}




};
