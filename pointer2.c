#include <stdio.h>

int main() {
    int a = 50;
    int *p;     // pointer to int
    int **q;    // pointer to pointer

    p = &a;     // p stores address of a
    q = &p;     // q stores address of p

    printf("Value of a = %d\n", a);
    printf("Value using *p = %d\n", *p);
    printf("Value using **q = %d\n", **q);

    printf("Address of a = %p\n", &a);
    printf("Address stored in p = %p\n", p);
    printf("Address stored in q = %p\n", q);

    return 0;
}
