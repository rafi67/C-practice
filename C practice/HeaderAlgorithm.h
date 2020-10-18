#include <stdio.h>

void sum_of_even_number() {
    int n =1, sum = 0;
    int arra[100];
    for(int i=0; i<100; i++){
        arra[i] = i+1;
    }
    for(int i=1; i<100; i+=2){
        sum+=arra[i];
    }
    printf("%d",sum);
}
