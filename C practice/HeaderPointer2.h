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

void program_4() {
    int i, j, n;
    int *arra[5], num[5];
    for(i=0; i<5; i++){
        printf("Enter number of student for class %d: ",i+1);
        scanf("%d", &n);
        num[i] = n;
        arra[i] = (int *)malloc(sizeof(int)*n);
        if(arra[i]==NULL){
            printf("Memory Allocation failed\n");
            return;
        }
        for(j=0; j<num[i]; j++){
            printf("Enter marks for student %d: ", j+1);
            scanf("%d", &arra[i][j]);
        }
    }
    printf("Output:\n");
    for(i=0; i<5; i++){
        printf("\n");
        printf("Class %d: ", i+1);
        for(j=0; j<num[i]; j++){
            printf("%4d", arra[i][j]);
        }
    }
}

void program_5() {
    int **arra;
    int i, j, n, total_classes;
    printf("Enter the number of classes: ");
    scanf("%d", &total_classes);
    int num[total_classes];
    arra = (int **)malloc(sizeof(int)*total_classes);
    if(arra==NULL){
        printf("Memory allocation failed\n");
        return;
    }
    for(i=0; i<total_classes; i++){
        printf("Enter the number of student for class %d: ", i+1);
        scanf("%d", &n);
        num[i] = n;
        arra[i] = (int *)malloc(sizeof(int)*n);
        if(arra[i]==NULL){
            printf("Memory allocation failed\n");
            return;
        }
        for(j=0; j<n; j++){
            printf("Enter marks for student %d: ", j+1);
            scanf("%d", &arra[i][j]);
        }
    }
    printf("Output:\n");
    for(i=0; i<total_classes; i++){
        printf("Class %d: ", i+1);
        for(j=0; j<num[i]; j++){
            printf("%4d", arra[i][j]);
        }
        printf("\n");
    }
}
