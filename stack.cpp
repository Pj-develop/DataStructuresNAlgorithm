// #include<iostream>
// using namespace std;

// class Node{
//     public:
//  int data;
//  Node* next;
//  Node* prev;
	
// 	Node(int data){
// 	this->data=data;
// 	this->next=NULL;
// 	this->prev=NULL;
//     }
// };

// class Stack{
//     public:
// 	Node *head;
//     Node *tail;

//     void push(int data){
//         Node *n1= new Node(data);
//         if(n1==NULL){
//             cout<<"Stack Overflow";
//         }
//         if(head==NULL){
//             head=n1;
//             tail=n1;
//         }
//         Node *temp;
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         temp->next=n1;
//         temp

//     }
		
// };