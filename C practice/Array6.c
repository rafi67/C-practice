#include <stdio.h>

void main(){
    int total_marks[] = {6,7,4,6,9,7,
    6,2,4,3,4,1};
    int count[11];
    for(int i=0; i<11; i++){
        count[i]=0;
    }
    int marks;
    for(int i=0; i<12; i++){
        count[total_marks[i]]++;
        for(int j=0; j<10; j++){
            printf("%d ", count[j]);
        }
        printf("\n");
    }
}
