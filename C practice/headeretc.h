#include <stdio.h>
#include <math.h>
#define MIN -1
#define PI (2 * acos(0))

void program_1() {
    printf("Value of MIN : %d\n", MIN);
    printf("Value of PI : %lf\n", PI);
}

#define p 50
#define q 60

void program_2() {
    int a = p, b = q;
    printf("a = %d, b = %d\n", a, b);
}

#define MAX(a, b) (a>b? a:b)

void macro(){
    int a = 83, b = 323;
    double d1 = 8.32323, d2 = 3.33332323;
    printf("maximum of %d and %d is %d\n", a, b, MAX(a, b));
    printf("maximum of %d and %d is %d\n", d1, d2, MAX(d1, d2));
}

#define SWAP(a, b){\
                a^=b;\
                b^=a;\
                a^=b;\
}

void macro_2() {
    int a = 83, b = 323;
    printf("a = %d, b = %d\n", a, b);
    SWAP(a,b);
    printf("a = %d, b = %d\n", a, b);
}
