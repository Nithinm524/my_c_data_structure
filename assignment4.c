#include <stdio.h>
#include <stdlib.h>
typedef struct {
 int *data;
 int size;
 int capacity;
} DynamicArray;
void init(DynamicArray *arr) {
 arr->capacity = 2;
 arr->size = 0;
 arr->data = (int *)malloc(arr->capacity * sizeof(int));
}
void push(DynamicArray *arr, int value) {
 if (arr->size == arr->capacity) {
 arr->capacity *= 2;
 arr->data = (int *)realloc(arr->data, arr->capacity * sizeof(int));
 }
 arr->data[arr->size++] = value;
}
void display(DynamicArray *arr) {
 for (int i = 0; i < arr->size; i++) printf("%d ", arr->data[i]);
 printf("\n");
}
int main() {
 DynamicArray arr;
 init(&arr);
 push(&arr, 10);
 push(&arr, 20);
 push(&arr, 30);
 display(&arr);
 free(arr.data);
 return 0;
}

