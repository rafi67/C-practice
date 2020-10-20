#include <stdio.h>

void program_1() {
    int x = 10;
    printf("Value of x is %d\n", x);
    printf("Address of x is %p\n", &x);
}

void program_2() {
    int x = 10;
    int *p;
    p = &x;
    printf("*p = %d\n", *p);
    printf("Value of p is %p\n", p);
}

void program_3() {
    double pi = 3.14159265358;
    int *ptr;
    ptr = &pi;
    printf("Value of pi is %lf\n", *ptr);
    printf("Value of ptr is %p\n", ptr);
}
