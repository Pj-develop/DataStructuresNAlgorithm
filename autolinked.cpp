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

int main(){
    Node *head;
    Node *n1=new Node(100);
    Node *n2=new Node(200);
    Node *n3=new Node(300);
    Node *n4=new Node(400);

    //connection
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=NULL;

    //LINKER
    head=n1;
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }


}