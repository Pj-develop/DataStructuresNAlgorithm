#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class LinkedList{
    public:
    Node *head;

    LinkedList(){
        head=NULL;
    }

    void append(int data)
    {
        if(head==NULL){
           head=new Node(data);
           return;
        }
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new Node(data);

    }


};

int main(){
    LinkedList list;
    list.append(100);
    list.append(200);




    Node *temp=list.head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;

}