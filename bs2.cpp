#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data){
        this->data=data;
        this->left=this->right=NULL;
    }
};

class BST{
    public:
    TreeNode *root;
    BST(){
        this->root=NULL;
    };

    TreeNode* insert(TreeNode *root, int data){
        if(root==NULL) root=new TreeNode(data);
        else if(root->data<data) root->left=insert(root->left,data);
        else if(root->data>data) root->right=insert(root->right,data);
        //this->root=root;
        return root;
    }

    void Inorder(TreeNode *root){
        if(root!=NULL){
            Inorder(root->left);
            Inorder(root->right);
            cout<<root->data<<" ";
        }
    }

    int maxDepth(TreeNode* node){
	if (node == NULL)
		return 0;
	else {
		/* compute the depth of each subtree */
		int lDepth = maxDepth(node->left);
		int rDepth = maxDepth(node->right);

		/* use the larger one */
		if (lDepth > rDepth)
			return (lDepth);
		else
			return (rDepth);
	}
    }

    // Find height of a tree, defined by the root node
    int tree_height(TreeNode* root) {
    if (root == NULL) 
        return 0;
    else {
        // Find the height of left, right subtrees
        int left_height = tree_height(root->left);
        int right_height = tree_height(root->right);
         
        // Find max(subtree_height) + 1 to get the height of the tree
        return max(left_height, right_height);
    }
    }



};

int main(){
    BST bs1;
    TreeNode *root=NULL;
    root=bs1.insert(root,100);
    bs1.insert(root,50);
    bs1.insert(root,200);
    bs1.insert(root,10);
    bs1.insert(root,60);
    bs1.insert(root,150);
    bs1.insert(root,300);
    bs1.Inorder(root);
    cout<<"\nHEIGHT"<<bs1.maxDepth(root);
    cout<<"\nHEIGHT"<<bs1.tree_height(root);
}
