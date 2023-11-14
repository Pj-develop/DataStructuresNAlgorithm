#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    int h;
};

Node* root = NULL;

struct Node* Rinsert(struct Node* p, int key) {
    struct Node* temp = NULL;
    if (p == NULL) {
        temp = new Node;
        temp->data = key;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    } else if (key < p->data) {
        p->left = Rinsert(p->left, key);
    } else if (key > p->data) {
        p->right = Rinsert(p->right, key);
    }
    return p;
};

void view(struct Node* p) {
    if (p != NULL) {
        view(p->left);
        cout << p->data << " ";
        view(p->right);
    }
};

int main() {
    root = Rinsert(root, 10);
    Rinsert(root, 20);
    Rinsert(root, 30);
    Rinsert(root, 40);
    Rinsert(root, 50);
    Rinsert(root, 60);
    Rinsert(root, 70);
    Rinsert(root, 90);
    view(root);
    return 0;
}
