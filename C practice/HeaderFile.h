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
    char data2[100];
    fgets(data, 100, fp);
    fgets(data2, 100, fp);
    fclose(fp);
    printf("%s\n", data);
    printf("%s\n", data2);
}

void program_5() {
    FILE *in_fp, *out_fp, *fp;
    char filename[] = "in_file.txt";
    char filename2[] = "out_file.txt";
    fp = fopen(filename, "w");
    fprintf(fp, "%d\n", 24);
    fprintf(fp, "%d\n", 24);
    fclose(fp);
    in_fp = fopen(filename, "r");
    int sum, num1, num2;
    fscanf(in_fp, "%d", &num1);
    fscanf(in_fp, "%d", &num2);
    fclose(in_fp);
    sum = num1+num2;
    out_fp = fopen(filename2, "w");
    fprintf(out_fp, "%d", sum);
    fclose(out_fp);
}

void program_6() {
    char data[80];
    int num1, num2, sum;
    FILE *in_file, *out_file;
    char filename[] = "in_file2.txt";
    char filename2[] = "out_file2.txt";
    in_file = fopen(filename, "w");
    fprintf(in_file, "24 ");
    fprintf(in_file, "24 ");
    fclose(in_file);
    in_file = fopen(filename, "r");
    fgets(data, 80, in_file);
    fclose(in_file);
    sscanf(data, "%d %d", &num1, &num2);
    sum = num1+num2;
    printf("%d + %d = %d\n", num1, num2, sum);
    out_file = fopen(filename2, "w");
    fprintf(out_file, "%d\n", sum);
    fclose(out_file);
}
