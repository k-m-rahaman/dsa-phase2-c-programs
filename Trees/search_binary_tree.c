#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

int search(struct Node* root, int key) {
    if (root == NULL)
        return 0;

    if (root->data == key)
        return 1;

    return search(root->left, key) || search(root->right, key);
}

int main() {
    struct Node* root = (struct Node*)malloc(sizeof(struct Node));
    root->data = 1;
    root->left = (struct Node*)malloc(sizeof(struct Node));
    root->left->data = 2;
    root->right = (struct Node*)malloc(sizeof(struct Node));
    root->right->data = 3;

    int key = 2;

    if (search(root, key))
        printf("Element Found");
    else
        printf("Element Not Found");

    return 0;
}