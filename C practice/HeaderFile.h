#include <stdio.h>
#include <stdlib.h>

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


void program_7() {
    int roll,roll2,roll3,num1,num2,num3,sum;
    int math[2][10] = {{1,2,3,4,5,6,7,8,9,10},{70,50,90,80,100,99,88,77,98,56}};
    int english[2][10] = {{1,2,3,4,5,6,7,8,9,10},{70,50,90,80,100,99,88,77,98,56}};
    int bangla[2][10] = {{1,2,3,4,5,6,7,8,9,10},{70,50,90,80,100,99,88,77,98,56}};
    FILE *fp, *fp2, *fp3, *fp4;
    char filename1[] = "math.txt";
    char filename2[] = "english.txt";
    char filename3[] = "bangla.txt";
    char filename4[] = "result.txt";
    fp = fopen(filename1, "w");
    for(int i=0, k=1; i<1; i++){
        for(int j=0; j<10; j++){
            fprintf(fp, "%d %d\n",math[i][j],math[k][j]);
        }
    }
    fclose(fp);
    fp = fopen(filename2, "w");
    for(int i=0, k=1; i<1; i++){
        for(int j=0; j<10; j++){
            fprintf(fp, "%d %d\n", english[i][j], english[k][j]);
        }
    }
    fclose(fp);
    fp = fopen(filename3, "w");
    for(int i=0, k=1; i<1; i++){
        for(int j=0; j<10; j++){
            fprintf(fp, "%d %d\n", bangla[i][j], bangla[k][j]);
        }
    }
    fclose(fp);
    fp = fopen(filename1, "r");
    fp2 = fopen(filename2, "r");
    fp3 = fopen(filename3, "r");
    fp4 = fopen(filename4, "w");
    for(int i=0; i<10; i++){
        int data1[20];
        int data2[20];
        int data3[20];
        fgets(data1,20,fp);
        fgets(data2,20,fp2);
        fgets(data3,20,fp3);
        sscanf(data1,"%d %d",&roll,&num1);
        sscanf(data2,"%d %d",&roll2,&num2);
        sscanf(data3,"%d %d",&roll3,&num3);
        sum = num1+num2+num3;
        fprintf(fp4, "%d-%d\n", roll,sum);
    }
    fclose(fp);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);
}

void program_8() {
    FILE *fp_in, *fp_out;
    char *input_file = "netbeans.png";
    char *output_file = "C:\\Users\\rafis\\Desktop\\netbeans2.png";
    int ch;
    fp_in = fopen(input_file, "rb");
    if(fp_in == NULL){
        perror("File opening failed");
        //return EXIT_FAILURE;
    }
    fp_out = fopen(output_file, "wb");
    while(1){
        ch = fgetc(fp_in);
        if(ch == EOF){
            break;
        }
        fputc(ch, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);
}

void program_9() {
    int ch;
    FILE *fp_in, *fp_out;
    char filename1[] = "F:\\VIDEO SONGS\\YouTube - -Pee Loon-OUATIM Song 2010 _HD_ W_Eng Subs--.mp4";
    char filename2[] = "C:\\Users\\rafis\\Desktop\\song.mp4";
    fp_in = fopen(filename1, "rb");
    if(fp_in == NULL){
        perror("File opening failed");
        return EXIT_FAILURE;
    }
    fp_out = fopen(filename2, "wb");
    while(1){
        ch = fgetc(fp_in);
        if(ch == EOF){
            break;
        }
        fputc(ch, fp_out);
    }
    fclose(fp_in);
    fclose(fp_out);
}

void program_10() {
    FILE *fp = fopen("in.txt", "r");
    if(fp == NULL){
        perror("Can't open file");
        //return EXIT_FAILURE;
    }
    int ch;
    ch = fgetc(fp);
    printf("%c\n", (char)ch);
    ch = fgetc(fp);
    printf("%c\n", (char)ch);
    fseek(fp,0,0);
    ch = fgetc(fp);
    printf("%c\n", (char)ch);
    fclose(fp);
}

void program_11() {
    FILE *fp = fopen("in.txt", "r");
    if(fp == NULL){
        perror("File opening failed");
    }
    int ch = fgetc(fp);
    printf("%c\n",(char) ch);
    ch = fgetc(fp);
    printf("%c\n", (char) ch);
    fseek(fp, 0, SEEK_SET);
    ch = fgetc(fp);
    printf("%c\n", (char)ch);
    fseek(fp, 0, SEEK_CUR);
    printf("%c\n", (char)ch);
}
