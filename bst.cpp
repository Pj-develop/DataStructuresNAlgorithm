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

class BinarySearchTree{
    private:
    Node* root;
    Node* insertnode(Node* root, int key){
        if(root==NULL) root=new Node(key);
        else if(root->data<key) root->left=insertnode(root->left,key);
        else if(root->data>key) root->right=insertnode(root->right,key);
        return root;
    }
    void inOrderT(Node* root){
        if(root!=NULL) {
        cout<<root->data<<" ";
        inOrderT(root->left);
        inOrderT(root->right);
        }
    }


    public:
    BinarySearchTree(){
        this->root=NULL;
    }
    void insert(int key){
        this->root=insertnode(root,key);

    }
    void inOrder(){
        inOrderT(this->root);
        cout<<endl;
    }
    void getroot(){
        cout<<root->data;
    }


};

int main(){
    BinarySearchTree bst1=BinarySearchTree();
    bst1.insert(10);
    bst1.insert(20);
    bst1.insert(30);
    bst1.insert(40);
    bst1.insert(50);
    bst1.inOrder();
    bst1.getroot();

    
    return 0;
}