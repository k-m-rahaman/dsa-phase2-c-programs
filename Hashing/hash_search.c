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

int search(int key) {
    int index = key % SIZE;
    int start = index;

    while (hashTable[index] != -1) {
        if (hashTable[index] == key)
            return index;

        index = (index + 1) % SIZE;

        if (index == start)
            break;
    }

    return -1;
}

int main() {
    init();
    insert(10);
    insert(20);
    insert(15);

    int key = 20;
    int result = search(key);

    if (result != -1)
        printf("Found at index %d", result);
    else
        printf("Not Found");

    return 0;
}