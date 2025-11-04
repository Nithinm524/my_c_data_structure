//inserting an elememt in an array at any position
#include <stdio.h>
#define CAP 5

int main() {
    int a[CAP] = {20, 30, 40};
    int n = 3;
    int x, pos;

    printf("Nithin M\n");
    printf("usn:1SV24CS089\n");
    printf("Enter the element to insert: ");
    scanf("%d", &x);

    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (n >= CAP) {
        printf("Array is full\n");
    }
    else if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
    }
    else {
        // Shift elements to make space
        for (int i = n; i >= pos; i--) {
            a[i] = a[i - 1];
        }

        // Insert element at the given position
        a[pos - 1] = x;
        n++;

        // Print the updated array
        printf("Array after insertion: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
