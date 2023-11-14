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
        this->head=NULL;
    }

    void append(int data){
        if(head==NULL){
            head=new Node(data);
        }
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;

        }
        temp->next=new Node(data);


    }

    void display(){
        Node *temp=head;
        while(temp->next!=NULL){
            cout<<temp->data<<",";
            temp=temp->next;
            
        }
    }

    void reverse(){
        Node *cur=head;
        Node *prev=NULL, *next=NULL;
        while(cur->next!=NULL)
        {
            next=cur->next

        }


    }


};

int main(){
    LinkedList list1;
    list1.append(100);
    list1.append(200);
    list1.append(300);

    list1.display();
}