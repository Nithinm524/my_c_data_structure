#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char** split(char *str, char delim, int *count) {
 char **tokens = NULL;
 char *token = strtok(str, &delim);
 *count = 0;
 while (token) {
 tokens = realloc(tokens, (*count + 1) * sizeof(char *));
 tokens[*count] = malloc(strlen(token) + 1);
 strcpy(tokens[*count], token);
 (*count)++;
 token = strtok(NULL, &delim);
 }
 return tokens;
}
int main() {
 char str[100], delim;
 printf("Enter string: ");
 gets(str);
 printf("Enter delimiter: ");
 scanf("%c", &delim);
 int count;
 char **result = split(str, delim, &count);
 for (int i = 0; i < count; i++) {
 printf("%s\n", result[i]);
 free(result[i]);
 }
 free(result);
 return 0;
}
