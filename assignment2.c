#include <stdio.h>
#include <stdlib.h>
char* my_strdup(char *src) {
 char *dup;
 int len = 0;
 while (src[len]) len++;
 dup = (char *)malloc(len + 1);
 if (!dup) return NULL;
 for (int i = 0; i <= len; i++) dup[i] = src[i];
 return dup;
}
int main() {
 char str[100];
 printf("Enter a string: ");
 gets(str);
 char *copy = my_strdup(str);
 printf("Copied string: %s\n", copy);
 free(copy);
 return 0;
}
