#include <stdio.h>

void program_1() {
    struct student {
        int id;
        char *name;
    };
    struct student one;
    one.id = 1;
    one.name = "Tahmid Rafi";
    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);
}
