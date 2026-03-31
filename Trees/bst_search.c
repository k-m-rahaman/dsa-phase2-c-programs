#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

int searchBST(struct Node* root, int key) {
    if (root == NULL)
        return 0;

    if (root->data == key)
        return 1;

    if (key < root->data)
        return searchBST(root->left, key);
    else
        return searchBST(root->right, key);
}

int main() {
    struct Node* root = (struct Node*)malloc(sizeof(struct Node));
    root->data = 5;
    root->left = (struct Node*)malloc(sizeof(struct Node));
    root->left->data = 3;
    root->right = (struct Node*)malloc(sizeof(struct Node));
    root->right->data = 7;

    int key = 7;

    if (searchBST(root, key))
        printf("Found");
    else
        printf("Not Found");

    return 0;
}