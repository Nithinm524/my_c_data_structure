#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Function to insert an element (enqueue)
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow! Cannot insert %d.\n", value);
        return;
    }
    if (front == -1)  // First element insertion
        front = 0;
    rear++;
    queue[rear] = value;
    printf("Enqueued: %d\n", value);
}

// Function to delete an element (dequeue)
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Nothing to delete.\n");
        return;
    }
    printf("Dequeued: %d\n", queue[front]);
    front++;
    if (front > rear) {
        front = rear = -1; // Reset queue when empty
    }
}

// Function to view front element (peek)
void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty. Nothing to peek.\n");
        return;
    }
    printf("Front element is: %d\n", queue[front]);
}

// Function to display queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;
    while (1) {
        printf("\n=== Queue Operations ===\n");
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
