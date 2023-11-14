#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
}

class Queue{
    public:
    Node *head; Node *tail;
    Queue(){
        this->head=NULL;
        this->tail=NULL;

    };
    void enQueue(int data){
        Node *newNode= new Node(data);
        if (this->head==NULL){
            this->head=newNode;
            this->tail=NewNode;
            return;
        }
        Node *temp=this->head;
        this->tail->next=newNode;
        this->tail=newNode;
        


    };
    void deQueue(){};
    bool isEmpty(){};
    void peek(){};
}