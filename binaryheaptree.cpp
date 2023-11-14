#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=NULL;right=NULL;
    }
};

class BinaryTree{
    public:
    Node* root;
    BinaryTree(){
        root=NULL;
    }

    Node* createTree(int arr[], int i, int n)
{

   //Type your code
}
    void insert(Node* root,int data){
        if(root==NULL){
            root=new Node(data);
        }
        else if (data<root->data){
            insert(root->left,data);
        }
        else if (data>root->data){
            insert(root->right,data);
        }
    }
};

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;


}