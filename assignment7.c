#include <stdio.h>
#include <stdlib.h>
int main() {
 int n1, n2;
 printf("Enter sizes: ");
 scanf("%d %d", &n1, &n2);
 int *a = malloc(n1 * sizeof(int));
 int *b = malloc(n2 * sizeof(int));
 for (int i = 0; i < n1; i++) scanf("%d", &a[i]);
 for (int i = 0; i < n2; i++) scanf("%d", &b[i]);
 int *m = malloc((n1 + n2) * sizeof(int));
 int i = 0, j = 0, k = 0;
 while (i < n1 && j < n2) {
 if (a[i] < b[j]) m[k++] = a[i++];
 else if (b[j] < a[i]) m[k++] = b[j++];
 else { m[k++] = a[i]; i++; j++; }
 }
 while (i < n1) m[k++] = a[i++];
 while (j < n2) m[k++] = b[j++];
 m = realloc(m, k * sizeof(int));
 printf("Merged array: ");
 for (i = 0; i < k; i++) printf("%d ", m[i]);
 free(a); free(b); free(m);
 return 0;
}
