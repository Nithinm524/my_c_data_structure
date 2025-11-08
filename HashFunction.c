#include <stdio.h>

#define SIZE 10   // size of the hash table

// Hash function
int hashFunction(int key, int size) {
    return key % size;
}

int main() {
    int hashTable[SIZE];
    int i, key, index;

    // Initialize hash table with -1 (empty slots)
    for (i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
    }

    // Insert some elements
    int keys[] = {23, 43, 13, 27};
    int n = 4;

    for (i = 0; i < n; i++) {
        key = keys[i];
        index = hashFunction(key, SIZE);

        // If slot already filled, print collision message
        if (hashTable[index] != -1) {
            printf("Collision occurred for key %d at index %d\n", key, index);
        } else {
            hashTable[index] = key;
        }
    }

    // Display hash table
    printf("\nHash Table:\n");
    for (i = 0; i < SIZE; i++) {
        if (hashTable[i] != -1)
            printf("Index %d --> %d\n", i, hashTable[i]);
        else
            printf("Index %d --> EMPTY\n", i);
    }

    return 0;
}
