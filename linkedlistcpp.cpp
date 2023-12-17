#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data=data;
        prev=next=NULL;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    LinkedList(){
        head=tail=NULL;
    }


    void insert(int data){
        Node* newNode=new Node(data);
        if(head==NULL) {
            head=newNode;
        }
        else{
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        }
    }

    void display(){
        Node* temp=this->head;
        while(temp!=NULL){
            cout<<temp->data<<" --> ";
            temp=temp->next;
        }
    }

};

int main(){

    LinkedList list;
    list.insert(20);
    list.insert(50);
    //cout<<list.head->next->data;
    list.insert(56);
    list.insert(423);
    list.insert(343);
    list.insert(30322);
    list.display();

}