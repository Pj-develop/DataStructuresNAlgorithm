#include<iostream>
#include<algorithm>
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
// ro
class BST{
public:
    Node* root;

    Node* insert(int data, Node* root){
        if (root==NULL) root=new Node(data);
        else if ( root->data> data) root->left=insert(data,root->left);
        else if ( root->data< data) root->right=insert(data,root->right);
        return root;

    }


    void Inorder(Node* root){
        if(root!=NULL){
            Inorder(root->left);
            cout<<root->data<<"->";
            Inorder(root->right);
        }
    }

    int minn(Node* root){
        int minv=root->data;
        while(root->left!=NULL){
            minv=root->left->data;
            root=root->left;
        }
        return minv;

    }

    

    Node* delete1(Node* root,int data){

        if (root==NULL) return NULL;
        else if ( root->data> data) root->left=delete1(root->left,data);
        else if ( root->data< data) root->right=delete1(root->right,data);
        else{
            if(root->left==NULL) return root->right;
            if(root->right==NULL) return root->left;
            else{
                root->data=minn(root->right);
                root->right=delete1(root->right,root->data);
            }
        }
        return root;
    }


};

int main(){

    BST bst1;
    Node* root=NULL;

    for(int i=0;i<5;i++){
    int inputt;
        cin>>inputt;
    if(root==NULL){
        root=bst1.insert(inputt,root);
    }
    else{
        bst1.insert(inputt,root);

    }

   
}

bst1.Inorder(root);
bst1.delete1(root,13);
cout<<"\n new \n";
bst1.Inorder(root);






}