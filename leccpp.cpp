#include <iostream>
#include <vector>

using namespace std;

// Definition of a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a binary tree from a list of integers
Node* createBinaryTree(vector<int>& elements, int index, int n) {
    if (index >= n)
        return nullptr;

    Node* root = new Node;
    root->data = elements[index];
    root->left = createBinaryTree(elements, 2 * index + 1, n);
    root->right = createBinaryTree(elements, 2 * index + 2, n);
    return root;
}

// Function to perform postorder traversal on the binary tree
void postorderTraversal(Node* root) {
    if (root == nullptr)
        return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    int n;
    cin >> n;
    vector<int> elements(n);

    for (int i = 0; i < n; i++) {
        cin >> elements[i];
    }

    Node* root = createBinaryTree(elements, 0, n);

    postorderTraversal(root);
    cout << endl;

    return 0;
}
