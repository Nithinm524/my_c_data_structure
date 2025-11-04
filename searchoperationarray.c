#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int x, found = 0;
    printf("Nithin M\n");
    printf("usn:1sv24cs089\n");
    printf("Enter element to search: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Element %d found at position %d\n", x, i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element %d not found\n", x);

    return 0;
}
