#include <stdio.h>
#include <stdlib.h>
// Node structure for AVL tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    int height;
};
// Function to get the height of a node
int height(struct Node* node) {
    if (node == NULL)
    {
        return 0;}
    return node->height;
}
// Function to get the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}
// Function to create a new node with the given data
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    node->height = 1; // New node is initially at height 1
    return node;
}
// Function to right rotate a subtree rooted with y
struct Node* rightRotate(struct Node* y) {
    struct Node* x = y->left;
    struct Node* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    // Return new root
    return x;
}

// Function to left rotate a subtree rooted with x
struct Node* leftRotate(struct Node* x) {
    struct Node* y = x->right;
    struct Node* T2 = y->left;
    // Perform rotation
    y->left = x;
    x->right = T2;
    // Update heights
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    // Return new root
    return y;
}
// Get the balance factor of a node
int getBalance(struct Node* node) {
    if (node == NULL)
        return 0;
    return height(node->left) - height(node->right);
}

// Function to insert a node into AVL tree
struct Node* insertNode(struct Node* node, int data) {
    // Perform normal BST insertion
    if (node == NULL)
        return newNode(data);
    if (data < node->data)
        node->left = insertNode(node->left, data);
    else if (data > node->data)
        node->right = insertNode(node->right, data);
    else // Duplicate data not allowed
        return node;
    // Update height of current node
    node->height = 1 + max(height(node->left), height(node->right));
    // Get the balance factor
    int balance = getBalance(node);
    // Left Left Case
    if (balance > 1 && data < node->left->data)
        return rightRotate(node);
    // Right Right Case
    if (balance < -1 && data > node->right->data)
        return leftRotate(node);
    // Left Right Case
    if (balance > 1 && data > node->left->data) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    // Right Left Case
    if (balance < -1 && data < node->right->data) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    // No rotation needed
    return node;
}
// Function to perform in-order traversal of the AVL tree
void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}
// Driver program to test AVL tree functions
int main() {
    struct Node* root = NULL;
    // Insert nodes into the AVL tree
    root = insertNode(root, 10);
    root = insertNode(root, 20);
    root = insertNode(root, 30);
    root = insertNode(root, 40);
    root = insertNode(root, 50);
    root = insertNode(root, 25);
    // Perform in-order traversal to display the sorted elements
    printf("In-order traversal of the AVL tree: ");
    inOrderTraversal(root);
    printf("\n");
    return 0;
}