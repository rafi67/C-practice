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

struct nametype {
    char first[20];
    char last[20];
};

struct student2 {
    int id;
    struct nametype name;
};

void program_4() {
    struct student2 one;
    printf("Enter your id: ");
    scanf("%d", &one.id);
    printf("Enter first name: ");
    scanf("%s", one.name.first);
    printf("Enter last name: ");
    scanf("%s", one.name.last);
    printf("ID: %d\n", one.id);
    printf("Name: %s %s\n", one.name.first, one.name.last);
}
