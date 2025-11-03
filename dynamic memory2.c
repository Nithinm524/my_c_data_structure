#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    a = (int *)calloc(n, sizeof(int));

    for (i = 0; i < n; i++) printf("%d ", a[i]); // All zeros by default

    free(a);
    return 0;
}

