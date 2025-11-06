#include <stdio.h>
#include <stdlib.h>

// Define structure for Node
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function to insert at end (for testing deletion)
void insertEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Function to delete node at a specific position
void deletePos(int pos) {
    if (head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }

    struct Node* temp = head;

    // Case 1: Delete first node
    if (pos == 1) {
        head = head->next;
        printf("Deleted node with value: %d\n", temp->data);
        free(temp);
        return;
    }

    // Traverse to node before the position
    struct Node* prev = NULL;
    for (int i = 1; i < pos && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    // If position is invalid
    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }

    // Adjust links and delete node
    prev->next = temp->next;
    printf("Deleted node with value: %d\n", temp->data);
    free(temp);
}

// Function to display linked list
void display() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    // Insert test data
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);

    printf("Initial Linked List:\n");
    display();

    printf("\nDeleting node at position 3...\n");
    deletePos(3);
    display();

    printf("\nDeleting node at position 1...\n");
    deletePos(1);
    display();

    printf("\nDeleting node at position 10 (invalid)...\n");
    deletePos(10);
    display();

    return 0;
}
