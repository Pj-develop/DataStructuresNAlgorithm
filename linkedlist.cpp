#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

};

void insertHead(struct Node **head,int key){
 struct Node* newNode= new Node;
 newNode->data=key;
 newNode->next=NULL;
  if(*head==NULL){
    *head=newNode;
    return;
  }   
  struct Node* temp=*head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newNode;
  return;
}

void lprint(Node* head);


void display(Node** head){
    Node* temp=*head;
    while (temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;

    }
    {
        /* code */
    }
    
}
int main(){

    Node* head= NULL;
    insertHead(&head,100);
    insertHead(&head,200);
    insertHead(&head,300);
    insertHead(&head,400);
    display(&head);



}

