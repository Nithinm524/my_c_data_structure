#include <stdio.h>
#include <stdlib.h>
int main() {
 int n;
 printf("Enter number of students: ");
 scanf("%d", &n);
 int **marks = malloc(n * sizeof(int *));
 int *count = malloc(n * sizeof(int));
 float *avg = malloc(n * sizeof(float));
 for (int i = 0; i < n; i++) {
 printf("Enter number of subjects for student %d: ", i + 1);
 scanf("%d", &count[i]);
 marks[i] = malloc(count[i] * sizeof(int));
 printf("Enter marks: ");
 int sum = 0;
 for (int j = 0; j < count[i]; j++) {
 scanf("%d", &marks[i][j]);
 sum += marks[i][j];
 }
 avg[i] = (float)sum / count[i];
 }
 int topper = 0;
 for (int i = 1; i < n; i++)
 if (avg[i] > avg[topper]) topper = i;
 printf("Topper: Student %d (Average %.2f)\n", topper + 1, avg[topper]);
 for (int i = 0; i < n; i++) free(marks[i]);
 free(marks); free(count); free(avg);
 return 0;
}
