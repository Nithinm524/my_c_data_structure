#include <stdio.h>
#define SIZE 10

int table[SIZE];

int hashfunc(int key) {
    return key % SIZE;
}

void insert(int key) {
    int index = hashfunc(key);
    int i = 0;

    while (table[(index + i) % SIZE] != -1) {
        i++;
        if (i == SIZE) {
            printf("Table full\n");
            return;
        }
    }
    table[(index + i) % SIZE] = key;
    printf("%d inserted at index %d\n", key, (index + i) % SIZE);
}

int search(int key) {
    int index = hashfunc(key);
    int i = 0;

    while (i < SIZE && table[(index + i) % SIZE] != -1) {
        if (table[(index + i) % SIZE] == key) {
            printf("%d found at index %d\n", key, (index + i) % SIZE);
            return (index + i) % SIZE;
        }
        i++;
    }

    printf("Key %d not found\n", key);
    return -1;
}

void del(int key) {
    int index = search(key);
    if (index == -1) {
        printf("Key %d not found, cannot delete\n", key);
        return;
    }
    table[index] = -1;
    printf("%d deleted\n", key);
}

void display() {
    printf("\nHash Table:\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d -> %d\n", i, table[i]);
}

int main() {
    for (int i = 0; i < SIZE; i++)
        table[i] = -1;

    insert(25);
    insert(35);
    insert(46);
    insert(10);

    del(25);
    search(35);

    display();
    return 0;
}
