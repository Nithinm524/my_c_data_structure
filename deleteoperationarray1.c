#include <stdio.h>
#define CAP 5

int main() {
    int a[CAP] = {20, 30, 40};
    int n = 3;  // current number of elements

    if (n > 0) {
        n--; 
          printf("Nithin M\n");
        printf("USN:1SV24CS089\n");
        // simply reduce the size to remove last element
        printf("Deleted element from end.\n");
    } else {
        printf("Array is empty.\n");
    }

    // Print updated array
    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

