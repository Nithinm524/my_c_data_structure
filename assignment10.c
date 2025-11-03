#include <stdio.h>
#include <stdlib.h>
int get(int *img, int w, int x, int y) {
 return *(img + y * w + x);
}
void set(int *img, int w, int x, int y, int val) {
 *(img + y * w + x) = val;
}
int main() {
 int w, h;
 printf("Enter width and height: ");
 scanf("%d %d", &w, &h);
 int *img = malloc(w * h * sizeof(int));
 for (int y = 0; y < h; y++)
 for (int x = 0; x < w; x++)
 set(img, w, x, y, x + y);
 printf("Image Matrix:\n");
 for (int y = 0; y < h; y++) {
 for (int x = 0; x < w; x++)
 printf("%d ", get(img, w, x, y));
 printf("\n");
 }
 free(img);
 return 0;
}

