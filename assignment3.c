#include <stdio.h>
#include <stdlib.h>
int main() {
 int r, c;
 printf("Enter rows and cols: ");
 scanf("%d %d", &r, &c);
 int *mat = (int *)malloc(r * c * sizeof(int));
 if (!mat) return 1;
 printf("Enter matrix elements:\n");
 for (int i = 0; i < r; i++)
 for (int j = 0; j < c; j++)
 scanf("%d", mat + i * c + j);
 printf("Transpose:\n");
 for (int j = 0; j < c; j++) {
 for (int i = 0; i < r; i++)
 printf("%d ", *(mat + i * c + j));
 printf("\n");
 }
 free(mat);
 return 0;
}
