#include <stdio.h>
#include <limits.h>
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

char to_upper(char ch) {
    return ch & 95;
}

char to_lower(char ch) {
    return ch | 32;
}

void program_8() {
    char *str = "AbCdEfGhIjKlMnOpQrStUvWxyz";
    for(int i = 0; i < 26; i++){
        printf("Uppercase : %c, ", to_upper(str[i]));
        printf("Lowercase : %c\n", to_lower(str[i]));
    }
}

void program_9() {
    int n;
    scanf("%d", &n);
    if(n>0 && (n & (n-1)) == 0){
        printf("%d is a power of 2\n", n);
    }
    else{
        printf("%d is not a power of 2\n", n);
    }
}

void program_10() {
    int n;
    int Count = 0;
    int arra[100];
    printf("How many time do you want to store number? ");
    scanf("%d", &n);
    printf("Please enter a number:\n");
    for(int i=0; i<n; i++){
        int number;
        scanf("%d", &number);
        arra[i] = number;
    }
    for(int i=0; i<n; i++){
        if(arra[i] == 1){
            Count++;
        }
    }
    printf("%d is store in array for %d times", 1, Count);
}

void program_11() {
    int n, Count;
    scanf("%d", &n);
    Count = 0;
    while(n){
        if(n&1) Count++;
        n = n >> 1;
    }
    printf("Number of 1: %d\n", Count);
}

void program_12() {
    int n1 = sizeof(int) * CHAR_BIT;
    printf("Size of integer is %d\n", n1);
    int n = 32, Count, i, num;
    scanf("%d", &num);
    for(i=0; i<n; i++){
        if(num & (1 << i)) Count++;
    }
    printf("Number of 1: %d\n", Count);
}

void program_13() {
    int n, m;
    scanf("%d %d", &n, &m);
    if(n ^ m){
        puts("Numbers are not equal\n");
    }
    else{
        puts("Numbers are equal\n");
    }
}
