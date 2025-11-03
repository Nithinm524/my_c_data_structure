#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, n, newSize, i;

    printf("Enter size: ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);

    printf("Enter new size: ");
    scanf("%d", &newSize);

    p = (int *)realloc(p, newSize * sizeof(int));

    if (newSize > n) {
        printf("Enter %d new numbers: ", newSize - n);
        for (i = n; i < newSize; i++)
            scanf("%d", &p[i]);
    }

    printf("Final elements: ");
    for (i = 0; i < newSize; i++)
        printf("%d ", p[i]);

    free(p);
    return 0;
}
