#include <stdio.h>
#define SIZE 10

int hashTable[SIZE];

void init() {
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;
}

void insert(int key) {
    int index = key % SIZE;

    while (hashTable[index] != -1 && hashTable[index] != -2) {
        index = (index + 1) % SIZE;
    }

    hashTable[index] = key;
}

void deleteKey(int key) {
    int index = key % SIZE;
    int start = index;

    while (hashTable[index] != -1) {
        if (hashTable[index] == key) {
            hashTable[index] = -2; // mark deleted
            return;
        }

        index = (index + 1) % SIZE;

        if (index == start)
            break;
    }
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

    deleteKey(20);

    display();
    return 0;
}