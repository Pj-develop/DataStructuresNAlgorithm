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
        right=left=NULL;
    }
};

class BST{
    public:
    Node* root;
    BST(){
        root=NULL;
    }
    
    Node* append(Node* root,int data){
        if(root==NULL) root=new Node(data);
        else if(data<root->data) root->left=append(root->left,data);
        else if (data>root->data) root->right=append(root->right,data);
        return root;
    }
    
    void finder(Node* root,int size){
        if(root!=NULL){
        int arr2[size];
        int i=0;
        finder(root->left,size);

        arr2[++i]=root->data;
        cout<<root->data<< " "; 
        finder(root->right,size);
        // for(int j=0;j<size;j++){
        //     cout<<arr2[j]<<" ";
        // }
        }
    }
};


int main()
{
    Node *root = NULL;
    BST bst;
    int data, k,s=-1;
    do
    {  
        cin >> data;
        if (data > 0)
            s++;            
            if(root==NULL) root=bst.append(root, data);
            else bst.append(root, data);
    } while (data > 0);
    cin >> k; 
    cout << "Smallest kth value ";
    bst.finder(root,s);
    return 0;
    
}