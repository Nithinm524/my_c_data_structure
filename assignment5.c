#include <stdio.h>
#include <stdlib.h>
char* getLine() {
 char *str = NULL, ch;
 int size = 0;
 while ((ch = getchar()) != '\n' && ch != EOF) {
 str = realloc(str, size + 1);
 str[size++] = ch;
 }
 str = realloc(str, size + 1);
 str[size] = '\0';
 return str;
}
int main() {
 printf("Enter a line: ");
 char *line = getLine();
 printf("You entered: %s\n", line);
 free(line);
 return 0;
}

