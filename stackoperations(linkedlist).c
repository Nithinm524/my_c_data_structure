#include <stdio.h>
#include <stdlib.h>

// Define structure for a stack node
struct Node {
    int data;
    struct Node* next;
};

// Top pointer to keep track of the top of the stack
struct Node* top = NULL;

// Function to push an element onto the stack
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->next = top;  // Link the new node to the previous top
    top = newNode;        // Update the top pointer
    printf("Pushed %d onto the stack.\n", value);
}

// Function to pop an element from the stack
void pop() {
    if (top == NULL) {
        printf("Stack Underflow! Nothing to pop.\n");
        return;
    }

    struct Node* temp = top;
    printf("Popped element: %d\n", top->data);
    top = top->next;  // Move top to the next node
    free(temp);       // Free the removed node
}

// Function to view the top element (peek)
void peek() {
    if (top == NULL) {
        printf("Stack is empty. Nothing to peek.\n");
        return;
    }
    printf("Top element is: %d\n", top->data);
}

// Function to display all stack elements
void display() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    struct Node* temp = top;
    printf("Stack elements (Top to Bottom): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function - menu driven
int main() {
    int choice, value;

    while (1) {
        printf("\n=== Stack Operations (Linked List) ===\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
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
