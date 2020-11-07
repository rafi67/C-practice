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

void program_2() {
    int n,x,m;
    while(1){
        printf("Please enter your number (0 to exit):");
        scanf("%d", &n);
        if(n == 0){
            return;
        }
        printf("How many bits you want to shift left? ");
        scanf("%d", &x);
        m = n << x;
        printf("Result is %d\n", m);
    }
}

void program_3() {
    int n,x,m;
    while(1){
        printf("Please enter your number(0 to exit): ");
        scanf("%d", &n);
        if(n == 0){
            return;
        }
        printf("How many bits you want to shift right? ");
        scanf("%d", &x);
        m = n >> x;
        printf("Result is %d\n",m);
    }
}
