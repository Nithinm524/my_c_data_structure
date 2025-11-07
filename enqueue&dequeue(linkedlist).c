#include <stdio.h>
#include <stdlib.h>

// Define structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Define front and rear pointers for the queue
struct Node* front = NULL;
struct Node* rear = NULL;

// Function to insert an element at the rear (Enqueue)
void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    // If queue is empty
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    printf("Enqueued: %d\n", value);
}

// Function to delete an element from the front (Dequeue)
void dequeue() {
    if (front == NULL) {
        printf("Queue Underflow! Nothing to delete.\n");
        return;
    }

    struct Node* temp = front;
    printf("Dequeued: %d\n", front->data);
    front = front->next;

    // If queue becomes empty after deletion
    if (front == NULL)
        rear = NULL;

    free(temp);
}

// Function to view the front element (Peek)
void peek() {
    if (front == NULL) {
        printf("Queue is empty. Nothing to peek.\n");
        return;
    }
    printf("Front element is: %d\n", front->data);
}

// Function to display all elements in the queue
void display() {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    struct Node* temp = front;
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function with menu-driven interface
int main() {
    int choice, value;

    while (1) {
        printf("\n=== Queue Operations (Linked List) ===\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
