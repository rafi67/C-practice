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

struct nametype2 {
    char first[20];
    char last[20];
};

struct student3 {
    int id;
    struct nametype2 name;
};

void program_5() {
    struct student3 one[5];
    int i, n = 5;
    for(i=0; i<n; i++){
        printf("Enter your id: ");
        scanf("%d", &one[i].id);
        printf("Enter your first name: ");
        scanf("%s", one[i].name.first);
        printf("Enter your last name: ");
        scanf("%s", one[i].name.last);
    }
    for(i=0; i<n; i++){
        printf("ID: %d\n", one[i].id);
        printf("Name: %s %s\n", one[i].name.first, one[i].name.last);
    }
}

typedef struct {
    char first[20];
    char last[20];
} nametype3;

typedef struct {
    int id;
    nametype3 name;
    char grade[3];
} student4;

void calculate_grade(student4 s, int mark) {
    if(mark>=80){
        strcpy(s.grade, "A+");
    }
    else if(mark>=70){
        strcpy(s.grade, "A");
    }
    else if(mark>=60){
        strcpy(s.grade, "A-");
    }
    else if(mark>=50){
        strcpy(s.grade, "B");
    }
    else if(mark>=40){
        strcpy(s.grade, "C");
    }
    else{
        strcpy(s.grade, "F");
    }
}

void program_6() {
    student4 Student[3];
    int i, n=3;
    int marks[] = {72, 82, 60};
    for(i=0; i<n; i++){
        printf("Enter your id: ");
        scanf("%d", &Student[i].id);
        printf("Enter your first name: ");
        scanf("%s", Student[i].name.first);
        printf("Enter your last name: ");
        scanf("%s", Student[i].name.last);
    }
    for(i=0; i<n; i++){
        calculate_grade(Student[i], marks[i]);
    }
    for(i=0; i<n; i++){
        printf("ID: %d\n", Student[i].id);
        printf("Name: %s %s\n", Student[i].name.first, Student[i].name.last);
        printf("Grade: %s\n", Student[i].grade);
    }
}
