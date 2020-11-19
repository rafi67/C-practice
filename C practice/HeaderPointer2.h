#include <stdio.h>
#include <stdlib.h>

void program_1() {
    int *marks;
    int i, n;
    printf("Please enter the number of students: ");
    scanf("%d", &n);
    marks = (int*)malloc(sizeof(int) *n);
    printf("Enter the marks for each student: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &marks[i]);
    }
    printf("Now here you can see the values:\n");
    for(i=0; i<n; i++){
        printf("%d\n", marks[i]);
    }
}

void program_2() {
    int *marks;
    int i, n;
    printf("Enter the number of student: ");
    scanf("%d", &n);
    marks = (int *) malloc(sizeof(int) *n);
    printf("Enter the marks for each student:\n");
    for(i=0; i<n; i++){
        scanf("%d", &marks[i]);
    }
    printf("Now here you can see the values:\n");
    for(i=0; i<n; i++){
        printf("%d\n", marks[i]);
    }
    free(marks);
}

void program_3() {
    int *marks;
    int i, n;
    printf("Enter the number of student: ");
    scanf("%d", &n);
    marks = (int *)calloc(0,n-1);
    printf("Enter marks for each student:\n");
    for(i=0; i<n; i++){
        scanf("%d", &marks[i]);
    }
    printf("Now you can see the values:\n");
    for(i=0; i<n; i++){
        printf("%d\n", marks[i]);
    }
    free(marks);
}
