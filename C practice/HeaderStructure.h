#include <stdio.h>
#include <string.h>

struct student1 {
    int id;
    char name[40];
};

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

void program_3() {
    struct student1 one;
    printf("Please enter your id: ");
    scanf("%d", &one.id);
    printf("Enter your name: ");
    scanf("%s", one.name);
    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);
}
