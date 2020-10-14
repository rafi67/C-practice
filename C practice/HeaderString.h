#include <stdio.h>

void stringShow() {
    char country[] = {'B','a','n','g','l','a','d','e','s','h','\0'};
    printf("%s\n",country);
}

void displayString() {
    char country[] = {'B', 'a', 'n', 'g',
    'l', 'a', 'd', 'e', 's', 'h', ' ', 'i',
    's', ' ', 'm', 'y', ' ', 'c', 'o', 'u',
    'n', 't', 'r', 'y','\0'};
    printf("%s\n", country);
}

void displayString2() {
    char country[] = {'B', 'a', 'n', 'g',
    'l', 'a', 'd', 'e', 's', 'h', '\0', 'i',
    's', ' ', 'm', 'y', ' ', 'c', 'o', 'u',
    'n', 't', 'r', 'y'};
    printf("%s\n",country);
}

void toUperCase(char arr[], int length) {
    printf("before converting to uper case %s\n",arr);
    for(int i=0; i<=length; i++){
        if(arr[i]>='a' && arr[i]<='z'){
            arr[i] = 'A'+(arr[i]-'a');
        }
    }
    printf("%s\n",arr);
}

void toLowerCase(char arra[], int length) {
    for(int i=0; i<=length; i++){
        if(arra[i]>='A' && arra[i]<='Z'){
            arra[i]= 'a'+(arra[i]-'A');
        }
    }
    printf("%s\n",arra);
}

int str_length(char str[]) {
    int length =0;
    for(int i=0; str[i]!='\0'; i++){
        length++;
    }
    return length;
}

void showLength() {
    char country2[100];
    int length;
    while(1==scanf("%s",&country2)){
        length = str_length(country2);
        printf("Length is %d\n",length);
        break;
    }
}

int length_array(char str[]) {
    int i=0;
    while(str[i]!=NULL){
        i++;
    }
    return i;
}

void GetsFunction() {
    char arr[100];
    while(NULL != gets(arr)){
        int length = length_array(arr);
        printf("%d\n",length);
    }
}

void concatenate_string() {
    char str1[] = "Bangla";
    char str2[] = "desh";
    char str3[11];
    for(int i=0; i<6; i++){
        str3[i] = str1[i];
    }
    for(int i=0, j=6; i<4; i++,j++){
        str3[j]=str2[i];
    }
    str3[10]='\0';
    printf("%s\n",str3);
}

int string_compare(char a[], char b[]) {
    if(str_length(a)==str_length(b)){
        for(int i=0; a[i]!='\0' && b[i]!='\0'; i++){
            if(a[i]>b[i]){
                return 1;
            }
            if(a[i]<b[i]){
                return -1;
            }
            if(str_length(a)>str_length(b)){
                return 1;
            }
            if(str_length(a)<str_length(b)){
                return -1;
            }
        }
    }
}
