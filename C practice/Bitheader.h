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

void program_4() {
    int n1 = 5, n2 = 6, n3;
    n3 = n1 | n2;
    printf("%d | %d = %d\n", n1, n2, n3);
}

void program_5() {
    int n1 = 5, n2 = 6, n3;
    n3 = n1 & n2;
    printf("%d & %d = %d\n", n1, n2, n3);
}

void program_6() {
    int n1 = 5, n2 = 6, n3;
    n3 = n1 ^ n2;
    printf("%d ^ %d = %d\n", n1, n2, n3);
}

void program_7() {
    int n;
    scanf("%d", &n);
    if(n & 1){
        printf("%d is odd\n", n);
    }
    else{
        printf("%d is even\n", n);
    }
}
