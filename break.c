 #include <stdio.h>
 // Function declaration
 int multiply(int x, int y);
 int main() {
 int result = multiply(4, 5);
 printf("Product = %d\n", result);
 return 0;
 }
 // Function definition
 int multiply(int x, int y) {
 return x * y;
 }
