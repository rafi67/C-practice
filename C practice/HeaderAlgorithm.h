#include <stdio.h>

void sum_of_even_number() {
    int sum = 0;
    for(int i=2; i<=100; i+=2){
        sum+=i;
    }
    printf("%d",sum);
}
