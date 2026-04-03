#include <stdio.h>
#define SIZE 10

int hashTable[SIZE];

void init() {
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;
}

void insert(int key) {
    int index = key % SIZE;

    while (hashTable[index] != -1) {
        index = (index + 1) % SIZE;
    }

    hashTable[index] = key;
}

void display() {
    for (int i = 0; i < SIZE; i++)
        printf("%d ", hashTable[i]);
}

int main() {
    init();
    insert(10);
    insert(20);
    insert(15);

    display();
    return 0;
}