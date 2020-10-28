#include <stdio.h>

int x = 10;

void program_1() {
    int y;
    printf("x = %d, y = %d\n", x, y);
}

int x1 = 1;

void myfnc(int y) {
    y = y*2;
    x1 = x1+10;
    printf("myfnc, x = %d, y = %d\n", x1, y);
}

void program_2() {
    int y = 5;
    x1 = 10;
    myfnc(y);
    printf("main, x = %d, y = %d\n", x1, y);
}

int a;
static int b;

void func() {
    a = a+1;
    b = b+1;
}

void program_3() {
    func();
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

void func2() {
    int a1 = 10;
    static int s = 10;
    a1 = a1+2;
    s = s+2;
    printf("a = %d, s = %d\n", a1, s);
}

void program_4() {
    func2();
    func2();
    func2();
}
