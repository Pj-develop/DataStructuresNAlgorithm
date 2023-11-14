#include<iostream>
using namespace std;

//BST : 
//insert : check, compare n root that 
//if root=NULL then first node / key will be root
// key<root then left sub tree
//key> root then rifght sub tree

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        right=left=NULL;

    }
};

class BST{
    public:
    Node* root;

    BST(){
        this->root=NULL;
    }
    void insert(Node* troot, int data){
        if(troot==NULL) troot=new Node(data);
        else if(data<root->data) insert(troot,data);
        else if(data>root->data) insert(troot,data);
    }

    void printd(Node* root){
        printd(root->left);
        cout<<root->data;
        printd(root->left);    
    }

};

int main(){
    BST b1=BST();
    Node* root=b1.root;
    b1.insert(root,10);
    b1.insert(root,20);
    b1.insert(root,30);
    b1.printd(root);

    
}