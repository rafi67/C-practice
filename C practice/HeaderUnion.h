#include <stdio.h>

struct s {
    char ch;
    int n;
    char str[16];
} sv;

union u {
    char ch;
    int n;
    char str[16];
} uv;

void program_1() {
    int struct_size, union_size;
    struct_size = sizeof(sv);
    union_size = sizeof(uv);
    printf("Structure variable took %d bytes\n", struct_size);
    printf("Union variable took %d bytes\n", union_size);
}

union u1 {
    char ch;
    int x;
    int y;
} u1v;

void program_2() {
    u1v.ch = 'A';
    printf("ch = %c\n", u1v.ch);
    u1v.x = 17;
    printf("x = %d\n", u1v.x);
    printf("ch = %c\n", u1v.ch);
    u1v.y = 18;
    printf(" y = %d\n", u1v.y);
    printf("ch = %c\n", u1v.ch);
    printf("x = %d\n", u1v.x);
}
