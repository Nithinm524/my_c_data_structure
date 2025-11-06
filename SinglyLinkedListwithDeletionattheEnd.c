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

// Function to delete from end
void deleteEnd() {
    if (head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }

    // If only one node exists
    if (head->next == NULL) {
        printf("Deleted node with value: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    // Traverse to the second last node
    struct Node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    // temp now points to second last node
    printf("Deleted node with value: %d\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
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
    // Insert some test data
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);

    printf("Initial Linked List:\n");
    display();

    printf("\nDeleting last node...\n");
    deleteEnd();
    display();

    printf("\nDeleting last node again...\n");
    deleteEnd();
    display();

    return 0;
}
