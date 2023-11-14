#include<iostream>
using namespace std;


//manual
struct Node{
    int data;
    struct Node* next;
};

void printer(struct Node *head){
    //struct Node *temp=head;
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }


}

int main(){
    //initialize & ALLOCATION;
    struct Node *head;
    struct Node *n1=new Node;
    struct Node *n2=new Node;
    struct Node *n3=new Node;

    //defination
    n1->data=1;
    n2->data=2;
    n3->data=3;

    //connection
    n1->next=n2;
    n2->next=n3;
    n3->next=NULL;

    //save add to first node

    head=n1;
    // while(head!=NULL){
    //     cout<<head->next<<" ";
    //     head=head->next;
    // }

    printer(head);

    

}