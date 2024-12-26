#include <iostream>

using namespace std;

// Node structure for the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert nodes in level order
Node* insertLevelOrder(int arr[], int i, int n) {
    Node* root = nullptr;
    if (i < n) {
        root = new Node(arr[i]);
        root->left = insertLevelOrder(arr, 2 * i + 1, n);
        root->right = insertLevelOrder(arr, 2 * i + 2, n);
    }
    return root;
}

// Function to perform inorder traversal
void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    int arr[n];
    cout << "Enter the values of the nodes: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    Node* root = insertLevelOrder(arr, 0, n);

    cout << "Inorder traversal of the binary tree: ";
    inorderTraversal(root);

    return 0;
}
