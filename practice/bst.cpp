#include<iostream>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        this->data=data;
        left=right=NULL;
    }
};

class BST{

private:
    TreeNode* root=NULL;
    TreeNode* insertatEnd(TreeNode* root,int data){
        if(root==NULL) root=new TreeNode(data);
        else if(data<root->data) root->left=insertatEnd(root->left,data);
        else if(data>root->data) root->right=insertatEnd(root->right,data);
        return root;
    }

    int find_min(TreeNode* root){
        int min=root->data;
        while(root->left!=NULL){
            min=root->left->data;
            root=root->left;
        }
        return min;
    }
    TreeNode* delete1(TreeNode* root,int data){
        if(root==NULL) return NULL;
        else if(data<root->data) root->left=delete1(root->left,data);
        else if(data>root->data) root->right=delete1(root->right,data);
        else{
            if(root->left == NULL) return root->right;
            else if(root->right == NULL) return root->left;
            else {
                root->data = find_min(root->right);
                root->right = delete1(root->right, root->data);
                }
            }
            return root;
        }

    void Inorder(TreeNode* root){
        if(root!=NULL){
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
        }
    }

    int height(TreeNode* root){
        int l,r;

        if(root==NULL) return 0;
        else{
        l=height(root->left);
        r=height(root->right);
        return max(l,r)+1;
            }
    }


public:
    void insert(int data){
        this->root=insertatEnd(root,data);
    }

    void print(){
        Inorder(root);
    }

    void getroot(){
        cout<<root->data;
    }

    void dell(int data){
        root=delete1(root,data);
        //cout<<root->data
    }
    void getheight(){
        cout<<height(root);
    }

};

int main(){
    BST bst1;
    bst1.insert(10);
    bst1.insert(50);
    bst1.insert(40);
    bst1.insert(30);
    bst1.insert(5);
    bst1.insert(8);
    bst1.insert(1);
    bst1.print();
    //bst1.getroot();
    //bst1.dell(50);
    cout<<endl;
    //bst1.print();
    cout<<endl<<"h: ";
    bst1.getheight();
}