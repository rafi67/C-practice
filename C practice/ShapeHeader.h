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
    int n2 = 1;
    int n3 = 3;
    int n4 = 5;
    for(int i=0; i<6; i++){
        for(int k=0; k<n2; k++){
            printf(" ");
        }
        n2++;
        for(int j=0; j<n; j++){
            printf("c");
        }
        n-=2;
        printf("\n");
        if(i==5){
            for(int j=0; j<5; j++){
                for(int r=0; r<n4; r++){
                    printf(" ");
                }
                n4--;
                for(int k=0; k<n3; k++){
                    printf("c");
                }
                n3+=2;
                printf("\n");
            }
        }
    }
}

void shape3() {
    int n= 7;
    int n2= 1;
    int n3 = 2;
    int n4 = 6;
    for(int i=0; i<7; i++){
        for(int k=0; k<n2; k++){
            printf(" ");
        }
        n2++;
        for(int j=0; j<n; j++){
            printf("c");
        }
        n--;
        printf("\n");
        if(i==6){
            for(int r=0; r<6; r++){
                for(int z=0; z<n4; z++){
                    printf(" ");
                }
                n4--;
                for(int h=0; h<n3; h++){
                    printf("c");
                }
                n3++;
                printf("\n");
            }
        }
    }
}

void shape4() {

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

void sorting2() {
    int arra[2][6] = {{2,4,9,89,200,56},{0,0,0,0,0,0}};
    for(int i=0,h=1; i<1; i++){
        for(int j=0; j<6; j++){
            arra[h][j] = arra[i][j];
        }
    }
    for(int i=1; i<2; i++){
        for(int j=0; j<6; j++){
            for(int k=0; k<6; k++){
                if(arra[i][k]>arra[i][k+1]){
                    int n1 = arra[i][k];
                    int n2 = arra[i][k+1];
                    arra[i][k+1] = n1;
                    arra[i][k] = n2;
                }
            }
        }
    }
    for(int h=0; h<1; h++){
        for(int i=0; i<6; i++){
            printf("%d ",arra[h][i]);
        }
        printf("\n");
    }
    for(int i=1; i<2; i++){
        for(int j=0; j<6; j++){
            printf("%d ",arra[i][j]);
        }
        printf("\n");
    }
}

void robot() {
    char c;
    int x=0,y=0, x1,y1;
    int position[9][9];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            position[i][j] = 1;
        }
    }
    int n1;
    printf("Please enter the number of blocked cells:");
    scanf("%d",&n1);
    for(int i=0; i<n1; i++){
        scanf("%d %d", &x1,&y1);
        position[x1][y1] =0;
    }
    while(1){
        scanf("%c",&c);
        if(c=='S'){
            break;
        }
        else if(c=='U'){
            x--;
            if(position[x][y]==0){
                x++;
            }
        }
        else if(c=='D'){
            x++;
            if(position[x][y]==0){
                x--;
            }
        }
        else if(c=='R'){
            y++;
            if(position[x][y]==0){
                y--;
            }
        }
        else if(c=='L'){
            y--;
            if(position[x][y]==0){
                y++;
            }
        }
    }
    printf("The position of the robot is: %d, %d",x,y);
}
