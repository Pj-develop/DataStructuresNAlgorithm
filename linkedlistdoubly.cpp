#include<iostream>
using namespace std;

class Node{
    public:
int data;
Node *n;
Node *p;

Node(int data){
    this->data=data;
    this->n=NULL;
    this->p=NULL;
}
};

class dlinkedlist{
    public:
    Node *head;
    Node *tail;

    void append(int data){
        Node *n1=new Node(data);
        if(head==NULL){
            head=n1;
            tail=n1;
            return;
        }
        Node *temp=head;;
        while(temp->n!=NULL){
            temp=temp->n;
        }
        temp->n=n1;//head linked
        n1->p=temp; //previous node linked
        tail=n1;//pinted to last

    }

    void displayfromS(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->n;
        }

    }
    
    void displayfromL(){
        Node *temp=tail;
        while(temp!=NULL){
            cout<<temp->data<<" <- ";
            temp=temp->p;
        }

    }

};

int main(){
    dlinkedlist list;
    list.append(100);
    list.append(200);
    list.append(300);
    list.displayfromL();
    return 0;

};