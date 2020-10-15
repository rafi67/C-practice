#include <stdio.h>
#include <string.h>

void shape1() {
    int n = 7;
    for(int i=0; i<7; i++){
        for(int j=0; j<n; j++){
            printf("C");
        }
        n--;
        printf("\n");
    }
    n = n+2;
    for(int i=1; i<7; i++){
        for(int j=0; j<n; j++){
            printf("C");
        }
        n++;
        if(n==8){
            break;
        }
        printf("\n");
    }
}

void shape2() {
    int n = 11;
    for(int i=0; i<11; i++){
        printf("\t");
        printf(" ");
        for(int j=0; j<n; j++){
            printf("C");
        }
        printf("\t");
        n = n-2;
        printf("\n");
    }
}

void palindrome() {
    char word[80], reverse_order[80];
    printf("Enter a palindrome word:");
    scanf("%s",word);
    int len = strlen(word);
    int i, j;
    for(i=0, j=len-1; i<len; i++,j--){
        reverse_order[i] = word[j];
    }
    reverse_order[i] = '\0';
    if(0==strcmp(word, reverse_order)){
        printf("Word is palindrome");
    }
    else{
        printf("Word is not palindrome");
    }
}

int factorial(int n) {
    if(n==1) return 1;
    else return n*factorial(n-1);
}

void sorting() {
    int arra1[] = {3,5,9,20,2,1};
    int arra2[6];
    for(int i=0; i<6; i++){
        arra2[i] = arra1[i];
    }
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(arra2[j]>arra2[j+1]){
                int n1 = arra2[j];
                int n2 = arra2[j+1];
                arra2[j] = n2;
                arra2[j+1] = n1;
            }
            if(j>5){
                j--;
            }
        }
    }
    for(int i=0; i<6; i++){
        printf("%d ",arra1[i]);
    }
    printf("\n");
    for(int j=0; j<6; j++){
        printf("%d ",arra2[j]);
    }
    printf("\n");
}
