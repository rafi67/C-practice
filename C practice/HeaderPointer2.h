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

void program_6() {
    int arra[] = {100,200,300,400,500,600,700};
    int *p;
    p = arra;
    printf("*p = %d\n", *p);
    printf("*p+1 = %d\n", *p+1);
    printf("*(p+1) = %d\n", *(p+1));
    printf("*(p+2) = %d\n", *(p+2));
    printf("*(p+3) = %d\n", *(p+3));
    printf("*(p+4) = %d\n", *(p+4));
    printf("*(p+5) = %d\n", *(p+5));
    printf("*(p+6) = %d\n", *(p+6));
}

void program_7() {
    char *p, a = 'F';
    int *q, b = 10;
    double *r, c = 302.64;
    p = &a;
    q = &b;
    r = &c;
    printf("Char size : %d bytes\n", sizeof(char));
    printf("p = %p\n", p);
    printf("p+1 = %p\n", p+1);
    printf("p+2 = %p\n", p+2);
    printf("Int size : %d bytes\n", sizeof(int));
    printf("q = %p\n", q);
    printf("q+1 = %p\n", q+1);
    printf("q+2 = %p\n", q+2);
    printf("Double size : %d bytes\n", sizeof(double));
    printf("r = %p\n", r);
    printf("r+1 = %p\n", r+1);
    printf("r+2 = %p\n", r+2);
}

void program_8() {
    void *vp;
    int n = 10;
    vp = &n;
    printf("Address of n is %p\n", &n);
    printf("Value of vp is %p\n", vp);
    printf("Content of vp is %d\n", *((int *)vp));
}

int add(int n1, int n2) {
    return n1+n2;
}

int sub(int n1, int n2) {
    return n1-n2;
}

void program_9() {
    int (*fnc)(int, int);
    int n1 = 10, n2 = 5;
    fnc = &add;
    printf("Result is %d\n", fnc(n1,n2));
    fnc = &sub;
    printf("Result is %d\n", fnc(n1,n2));
}

int operate(int (*op)(int,int), int a, int b) {
    return op(a, b);
}

void program_10() {
    int a = 10, b = 5;
    printf("Result is %d\n", operate(&add, a, b));
    printf("Result is %d\n", operate(&sub, a, b));
}

int comparefunc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void program_11() {
    int i, n = 5;
    int values[] = {65,6,100,1,250};
    qsort(values,5,sizeof(int),comparefunc);
    for(i=0; i<n; i++){
        printf("%d\n", values[i]);
    }
}

void program_12() {
    int key, *item, n=5;
    int values[] = {1,2,5,7,9};
    while(1){
        printf("Enter a key value(0 to exit): ");
        scanf("%d", &key);
        if(key==0){
            break;
        }
        item = (int *) bsearch(&key,values,n,sizeof(int),comparefunc);
        if(item!=NULL){
            printf("Item found %d\n", *item);
        }
        else{
            printf("Item not found\n");
        }
    }
}
