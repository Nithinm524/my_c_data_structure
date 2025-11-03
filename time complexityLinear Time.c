#include <stdio.h>
#include <time.h>

int main() {
    long n, i;
    clock_t start, end;
    double time_taken;

    printf("Enter n: ");
    scanf("%ld", &n);

    start = clock();           // start timing

    for (i = 0; i < n; i++);   // simple O(n) loop

    end = clock();             // end timing

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time Complexity: O(n)\n");
    printf("Time taken: %f seconds\n", time_taken);

    return 0;
}
