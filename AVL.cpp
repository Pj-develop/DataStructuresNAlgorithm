#include<iostream>
using namespace std;

struct Node{
int data;
Node *left,*right;
int h;
};

Node* root=NULL;

int Nodeh(Node* p){
    int hl,hr;
    hl=p && p->left?p->left->h:0;
    hr=p && p->right?p->right->h:0;
     return (hl>hr?hl+1:hr+1);
}


struct Node *Rinsert(struct Node *p,int key){
struct Node *temp=NULL;
if(p==NULL){
    temp= new Node;
    temp->data=key;
    temp->left=NULL;
    temp->h=1;
    temp->right=NULL;
    return temp;
}
else if(key<p->data){
    p->left=Rinsert(p->left,key);
}
else if(key>p->data){
    p->right=Rinsert(p->right,key);
}
p->h=Nodeh(p);
return p;

};
void view(struct Node *p){
if(p!=NULL){
    view(p->left);
    cout<<p->data<<" ";
    view(p->right);
}
};

int main(){
    root=Rinsert(root,10);
    cout<<root->data<<endl;
    root=Rinsert(root,5);
    cout<<root->data<<endl;
    root=Rinsert(root,30);
    //cout<<root->h-1<<endl;
    cout<<root->data<<endl;
    root=Rinsert(root,4);
    cout<<root->data<<endl;
    root=Rinsert(root,7);
    cout<<root->data<<endl;
    root=Rinsert(root,40);
    cout<<root->data<<endl;
    root=Rinsert(root,25);
    cout<<root->data<<endl;
    //root=Rinsert(root,80);
    cout<<root->h<<endl;

    root=Rinsert(root,90);
    // Rinsert(root,20);
    // Rinsert(root,30);
    // Rinsert(root,40);
    // Rinsert(root,50);
    // Rinsert(root,60);
    // Rinsert(root,70);
    // Rinsert(root,90);
    view(root);
    return 0;
}