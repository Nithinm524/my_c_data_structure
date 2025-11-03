#include <stdio.h>
#include <time.h>

int main() {
    long n, i, j;
    clock_t start, end;
    double time_taken;

    printf("Enter n: ");
    scanf("%ld", &n);

    start = clock();

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++);   // nested loop → O(n²)

    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time Complexity: O(n^2)\n");
    printf("Time taken: %f seconds\n", time_taken);

    return 0;
}
