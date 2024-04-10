#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Create a new Node with the given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Inorder traversal of the binary tree
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    struct Node* root = createNode(1);

    struct Node* left = createNode(2);
    root->right = createNode(3);

    root->left = left;
    left->left = createNode(4);
    left->right = createNode(5);

    printf("Inorder traversal of the binary tree: ");
    inorderTraversal(root);

    return 0;
}
