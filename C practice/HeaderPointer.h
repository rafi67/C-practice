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

void program_4() {
    int x = 10;
    int *p;
    p = &x;
    printf("Value of x is %d\n", x);
    *p = 20;
    printf("Value of x is %d\n", x);
    printf("Address of x is %p\n", &x);
    printf("Value of p is %p\n", p);
}

void program_5() {
    int x = 10;
    int *p;
    printf("Value of x: %d\n", x);
    p = &x;
    *p = 20;
    printf("Value of x: %d\n", x);
    x = 15;
    printf("Value of x: %d\n", x);
    printf("Value stored at location %p is %d\n", p, *p);
    printf("Address of x: %p\n", &x);
    printf("Value of p: %p\n", p);
}

void program_6() {
    int x = 10;
    int y;
    int *p;
    printf("Value of x: %d\n", x);
    p = &x;
    y = *p;
    *p = 15;
    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of *p: %d\n", *p);
    printf("Address of x: %p\n", &x);
    printf("Address of y: %p\n", &y);
    printf("Value of p: %p\n", p);
}

void program_7() {
    int x = 10, y;
    int *p, *q;
    p = &x;
    q = &y;
    y = *p;
    *p = 15;
    *q = 20;
    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of *p: %d\n", *p);
    printf("Value of *q: %d\n", *q);
}

void program_8() {
    int x = 100;
    int *p = NULL;
    printf("Value of x: %d\n", x);
    p = &x;
    printf("Value of *p: %d\n", *p);
}

void program_9() {
    char s[] = "Bangladesh";
    printf("Name of our country %s\n", s);
    printf("Address of s is %p\n", s);
}

void program_10() {
    char s[] = "Bangladesh";
    char *p;
    p = s;
    printf("Name of our country %s\n", p);
}

void program_11() {
    char c1 = 'A', c2 = 'B', c3 = 'C';
    char *p1, *p2, *p3;
    p1 = &c1;
    p2 = &c2;
    p3 = &c3;
    printf("%c, %c, %c\n", *p1, *p2, *p3);
}

void program_12() {
    char a = 'A';
    char *p, **q;
    p = &a;
    q = &p;
    printf("Value of a %c\n", a);
    printf("Value of a %c\n", *p);
    printf("Value of a %c\n", **q);
}
