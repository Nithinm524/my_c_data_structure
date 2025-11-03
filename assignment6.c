#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
 int data;
 struct Node *next;
} Node;
Node* create(int n) {
 Node *head = NULL, *temp = NULL;
 for (int i = 0; i < n; i++) {
 Node *newNode = malloc(sizeof(Node));
 scanf("%d", &newNode->data);
 newNode->next = NULL;
 if (!head) head = newNode;
 else temp->next = newNode;
 temp = newNode;
 }
 return head;
}
Node* deleteKthFromEnd(Node* head, int k) {
 Node *fast = head, *slow = head;
 for (int i = 0; i < k; i++) fast = fast->next;
 if (!fast) {
 Node *temp = head->next;
 free(head);
 return temp;
 }
 while (fast->next) {
 fast = fast->next;
 slow = slow->next;
 }
 Node *temp = slow->next;
 slow->next = temp->next;
 free(temp);
 return head;
}
void printList(Node *head) {
 while (head) {
 printf("%d ", head->data);
 head = head->next;
 }
 printf("\n");
}
int main() {
 int n, k;
 printf("Enter number of nodes: ");
 scanf("%d", &n);
 Node *head = create(n);
 printf("Enter k: ");
 scanf("%d", &k);
 head = deleteKthFromEnd(head, k);
 printList(head);
 while (head) {
 Node *temp = head;
 head = head->next;
 free(temp);
 }
 return 0;
}

