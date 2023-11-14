#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *nxt;

    Node(int data)
    {this->data=data;
    this->nxt=NULL;

    }
};

class LinkedList{
public:
Node *head;
LinkedList(){
    this->head=NULL;

}

void append(int data ){
    Node* newNode= new Node(data);
    if(this->head==NULL){
        this->head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->nxt!=NULL){
        temp=temp->nxt;
    }
    temp->nxt=newNode;
}

void display(){
    Node* temp=head;


}


};
int main(){
    LinkedList list= LinkedList(); //first node that is empty

    Node *n1= new Node(10);

    Node *n2= new Node(20);
    Node *n3= new Node(20);

}