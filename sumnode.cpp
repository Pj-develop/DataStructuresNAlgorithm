#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* node = new Node();  // Allocate memory for the new node
    node->data = value;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

Node* insertNode(Node* root, int value) {
    if (root == nullptr) {
        return createNode(value);
    } else if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }
    return root;
}

bool searchKey(Node* root, int key) {
    if (root == nullptr) {
        return false;
    }
    
    if (root->data == key) {
        return true;
    }
    
    if (key < root->data) {
        return searchKey(root->left, key);
    } else {
        return searchKey(root->right, key);
    }
}

int main() {
    Node* root = nullptr;
    int numNodes, value, key;

    cin >> numNodes;

    for (int i = 0; i < numNodes; i++) {
        cin >> value;
        root = insertNode(root, value);
    }

    cin >> key;

    bool found = searchKey(root, key);
    if (found) {
        cout << "The key " << key << " is found in the binary search tree";
    } else {
        cout << "The key " << key << " is not found in the binary search tree";
    }

    return 0;
}

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* node = new Node();
    node->data = value;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

Node* insertNode(Node* root, int value) {
    if (root == nullptr) {
        return createNode(value);
    } else if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }
    return root;
}

int sumNodes(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    return root->data + sumNodes(root->left) + sumNodes(root->right);
}

int main() {
    Node* root = nullptr;
    int value;
    
    while (true) {
        cin >> value;
        if (value == -1) {
            break;
        }
        root = insertNode(root, value);
    }

    int sum = sumNodes(root);
    cout << "Sum of all nodes in the BST is " << sum << endl;

    return 0;
}
