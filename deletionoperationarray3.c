//Delete an element at any position in an array
#include <stdio.h>
#define CAP 5
int main() {
    int a[CAP] = {20, 30, 40, 50, 60};
    int n = 5;
    int pos;
    printf("Nithin M\n");
    printf("usn:1SV24CS089\n");
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    if (n == 0) {
        printf("Array is empty.\n");
    }
    else if (pos < 1 || pos > n) {
        printf("Invalid position.\n");
    }
    else {
        // Shift elements left to fill the gap
        for (int i = pos - 1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;
        printf("Deleted element at position %d.\n", pos);
    }
    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
