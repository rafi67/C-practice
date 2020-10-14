#include<stdio.h>
#include<string.h>

void show_result() {
    int marks[4][10] = {{80,70,92,78,
    58,83,85,66,99,84}, {75,67,55,100,
    91,84,79,61,90,97}, {98,67,75,89,
    81,83,80,90,88,77}, {0,0,0,0,0,0,
    0,0,0,0}};
    for(int col=0; col<10; col++){
        marks[3][col] = marks[0][col]/4.0 + marks[1][col]/4.0 + marks[2][col]/2.0;
        printf("Roll No: %d Total Marks: %d\n", col+1, marks[3][col]);
    }
}

void counter() {
    int number[10][10];
    for(int i=0; i<=9; i++){
        for(int j=0; j<=9; j++){
            number[i][j] = (i+1)*(j+1);
        }
    }

    for(int i=0; i<=9; i++){
        for(int j=0; j<=9; j++){
            printf("%d X %d = %d\n",i+1,j+1,number[i][j]);
        }
    }
}

void show_2d_Array() {
    char saarc[7][100] = {"Bangladesh",
    "India", "Pakistan", "Sri Lanka", "Nepal",
    "Bhutan", "Maldive"};
    int row, col, name_length;
    for(row=0; row<7; row++){
        name_length = strlen(saarc[row]);
        for(col=0; col<name_length; col++){
            printf("%c",saarc[row][col]);
        }
        printf("\n");
    }
}

void D_Array_row_count(int number[5][5]) {
    int sum;
    for(int i=0; i<5; i++){
        sum = number[i][0];
        for(int j=1; j<5; j++){
            sum = sum+number[i][j];
        }
        printf("Sum of row %d: %d\n",i+1, sum);
    }
}

void Array_column_count(int number[5][5]) {
    int sum;
    for(int i=0; i<5; i++){
            sum = number[0][i];
            for(int j=1; j<5; j++){
                sum = sum+number[j][i];
            }
        printf("Sum of column %d: %d\n",i+1,sum);
    }
}

void column_to_row(int number[5][5]){
    int arra[5][5];
    for(int i=0; i<=4; i++){
        for(int j=0; j<=5; j++){
            arra[i][j] = number[j][i];
        }
    }
    traverse(arra);
}

void traverse(int number[5][5]){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d ",number[i][j]);
        }
        printf("\n");
    }
}
