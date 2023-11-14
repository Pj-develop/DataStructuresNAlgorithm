#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=this->right=NULL;
    }
};

class BinaryTree{
    public:
    Node* root;
    
    BinaryTree(){
        this->root=NULL;
    }

    Node* insert(Node *root,int data){
        int arr[7]={1,2,3,4,5,6,7};
        int size=7;
        if(root==NULL){
            root=new Node(data);
        }
        else {            root->left=new Node(data);
            arr[2*ind+1];
           
        }

    }

};

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int size=7;
    Node *root=NULL;
    BinaryTree bt;
    for(int i=0;i<size;i++){
        bt.insert(root , arr[i]);
    }
}