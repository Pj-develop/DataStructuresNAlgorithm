// You are using GCC
#include <iostream>
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
class BST{
    public:
    Node* root=NULL;
    Node* insert(Node *root,int data){
        if (root==NULL) root=new Node(data);
        else if (root->data>data) root->left=insert(root->left,data);
        else if(root->data<data) root->right=insert(root->right,data);
        
        return root;
    }
    
    void Preorder(Node* root){
        if(root!=NULL){
            cout<<root->data<<" ";
            Preorder(root->left);
            Preorder(root->right);
        }
    }
};

int main() {
    
    int k=1;
    Node* root=NULL;
    BST bst;
    int c=1;

    while(k>0) {
        if(c==1){
            std::cin >>k; 
            root=bst.insert(root,k);
            c++;
            continue;
        }
        std::cin >> k;
        root=bst.insert(root,k);
        c++;
        
    }
    bst.Preorder(root);
return 0;
}