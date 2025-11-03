#include <stdio.h>

int main() {
    int a = 10;
    int *p;        // pointer declaration
    p = &a;        // store address of 'a'

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Pointer p stores = %p\n", p);
    printf("Value pointed by p = %d\n", *p);

    return 0;
}
