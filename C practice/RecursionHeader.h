#include <stdio.h>
#include <string.h>

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

void program_5() {
    char *s = "Hurray, I am learning recursion!";
    printf("%s\n", s);
    program_5();
}

void program_6(int Count) {
    if(Count == 5){
        return;
    }
    printf("I am learning recursion.\n");
    program_6(Count+1);
    return;
}

void program_7(int Count) {
    if(Count>5){
        return;
    }
    printf("Count = %d\n", Count);
    program_7(Count+1);
}

void program_8(int Count) {
    if(Count>5){
        return;
    }
    printf("Count = %d\n", Count);
    program_8(Count+1);
    printf("Count = %d\n", Count);
}

void program_9() {
    static int Count = 1;
    if(Count>5){
        return;
    }
    printf("Count = %d\n", Count);
    Count++;
    program_9();
}

int factorial(int n) {
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

void program_10() {
    int n;
    scanf("%d", &n);
    if(n<0){
        printf("Undefined\n");
        return;
    }
    printf("Factorial of %d is %d\n", n, factorial(n));
}

int f_calls = 0;

int factorial2(int n) {
    f_calls++;
    if(n == 0){
        return 1;
    }
    return n*factorial2(n-1);
}

void program_11() {
    int n;
    scanf("%d", &n);
    if(n<0){
        printf("Undefined\n");
        return;
    }
    printf("Factorial of %d is %d\n", n, factorial2(n));
    printf("Number of factorial calls : %d\n", f_calls);
}

int f_calls2 = 0;

int fib(int n){
    f_calls2++;
    if(n == 1 || n ==2){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

void program_12() {
    int n;
    char s[3];
    scanf("%d", &n);
    if(n == 1){
        strcpy(s, "st");
    }
    else if(n == 2){
        strcpy(s, "nd");
    }
    else if( n == 3){
        strcpy(s, "rd");
    }
    else{
        strcpy(s, "th");
    }
    printf("%d%s fibonacci number is %d\n", n, s, fib(n));
    printf("Number of function calls : %d\n", f_calls2);
}

int f_calls3 = 0;
int fibo[50];

int fib2(int n){
    f_calls3++;
    if(fibo[n]!=0){
        return fibo[n];
    }
    if(n == 1 || n == 2){
        return fibo[n];
    }
    fibo[n] = fib2(n-1) + fib2(n-2);
    return fibo[n];
}

void program_13() {
    int n;
    char s[3];
    fibo[1] = 1;
    fibo[2] = 1;
    scanf("%d", &n);
    if(n == 1){
        strcpy(s, "st");
    }
    else if(n == 2){
        strcpy(s, "nd");
    }
    else if(n == 3){
        strcpy(s, "rd");
    }
    else{
        strcpy(s, "th");
    }
    printf("%d%s fibonacci number is %d\n", n, s, fib2(n));
    printf("Number of function calls : %d\n", f_calls3);
    for(int i=1; i<12; i++){
        printf("%d : %d\n", n, fibo[i]);
    }
}

int n = 1;
int n2 = 1;
int n3 = 0;
void series() {
    if(n2 == 11){
        printf("Total sum is %d\n", n3);
        return;
    }
    n3 = n3+n;
    n++;
    n2++;
    program_14();
}

void program_14() {
    series();
}

char c[] = "Bangladesh";
char c2[11];
int num1 = 0;
int num2 = 9;

void reverseString() {
    if(num1 == 10){
        printf("%s\n", c2);
        return;
    }
    c2[num1] = c[num2];
    num1++;
    num2--;
    reverseString();
}

int f;

void permutation(int n, int r) {
    int f2 = factorial(n)/factorial(n-r);
    f = f2;
}

int arra[] = {2,3,5,6,7,8,4,1,9,10};

void program_15() {
    if(f == 0){
        return;
    }
    for(int i = 0, n = 1; i<10, n<10; i++, n++){
        int n1 = arra[i];
        int n2 = arra[n];
        arra[i] = n2;
        arra[n] = n1;
    }
    for(int i = 0; i<10; i++){
        printf("%d,", arra[i]);
    }
    printf("\n");
    f--;
    program_15();
    printf("value of f is %d\n", f);
}
