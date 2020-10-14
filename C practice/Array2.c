#include <stdio.h>

void main(){
    int array[10] = {10,20,30,40,50,60,70,80,90,100};
    int temp[10];
    for(int i=0,j=9; i<=9; i++,j--){
        temp[i]=array[j];
        if(i==9){
            for(int k=0; k<=9; k++){
                array[k]=temp[k];
            }
        }
    }
    for(int i=0; i<10; i++){
        printf("%d\n",array[i]);
    }
}
