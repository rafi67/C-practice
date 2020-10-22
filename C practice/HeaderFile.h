#include <stdio.h>

void program_1() {
    FILE *fp;
    char filename[] = "myfile.txt";
    fp = fopen(filename, "w");
    fprintf(fp, "this file is written by my program! ");
    fprintf(fp, "I'm so happy.");
    fclose(fp);
}

void program_2() {
    FILE *fp;
    char filename[] = "my_file2.txt";
    fp = fopen(filename, "w");
    fprintf(fp, "This file write by my program! ");
    fprintf(fp, "I'm so happy.\n");
    fclose(fp);
    fprintf(fp, "Second line.\n");
}

void program_3() {
    FILE *fp;
    char filename[] = "my_file3.txt";
    fp = fopen(filename, "w");
    fprintf(fp, "This file is written by my program! ");
    fprintf(fp, "I'm so happy.\n");
    fclose(fp);
    fp = fopen(filename, "a");
    fprintf(fp, "Second line.\n");
    fclose(fp);
}

void program_4() {
    FILE *fp;
    char filename[] = "my_file3.txt";
    fp = fopen(filename, "r");
    char data[100];
    fscanf(fp, "%s", data);
    fscanf(fp, "%s", data);
    printf("%s", data);
    fclose(fp);
}
