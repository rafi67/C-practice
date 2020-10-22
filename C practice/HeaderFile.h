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
