#include <stdio.h>

void program_1() {
    FILE *fp;
    char filename[] = "myfile.txt";
    fp = fopen(filename, "w");
    fprintf(fp, "this file is written by my program! ");
    fprintf(fp, "I'm so happy.");
    fclose(fp);
}
