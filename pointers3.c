#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;   // pointer to first element

    printf("Original array:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", *(p + i));

    // Update elements using pointer
    for (int i = 0; i < 5; i++)
        *(p + i) = *(p + i) + 51;  // add 5 to each element

    printf("\n\nUpdated array:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", *(p + i));

    return 0;
}
