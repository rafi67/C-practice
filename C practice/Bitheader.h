#include <stdio.h>

void program_1() {
    char a, b;
    a = 0;
    b = ~a;
    printf("a = %d, b = %d\n", a, b);
    a = 1;
    b = ~a;
    printf("a = %d, b = %d\n", a, b);
}
