#include <stdio.h>
#include <string.h>

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

void program_2() {
    struct student {
        int id;
        char name[40];
    };
    struct student one;
    one.id = 2;
    strcpy(one.name, "Tahmid Rafi");
    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);
}
