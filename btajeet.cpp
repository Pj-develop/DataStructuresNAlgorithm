#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};




Node* insert(struct Node* root, int arr[],int i,int n) {
    if(i<n){
        struct Node* temp=new Node(arr[i]);
        root=temp;
        root->left=insert(root->left,arr,2*i+1,n);
        root->right=insert(root->right,arr,2*i+2,n);
    }
    return root;
}

void postOrder(struct Node* root) {
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

int main() {
    Node* root = nullptr;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    root=insert(root,arr,0,n);
    postOrder(root);
    return 0;
}