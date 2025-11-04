//Delete an element from the beginning in an array
#include <stdio.h>
#define CAP 5
int main() {
    int a[CAP] = {20, 30, 40};
    int n = 3;

    if (n > 0) {
        for (int i = 0; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;
        printf("Nithin M\n");
        printf("usn:1SV24CS089\n");
        printf("Deleted element from beginning.\n");
    } else {
        printf("Array is empty.\n");
    }
    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
