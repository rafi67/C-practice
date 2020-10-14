#include <stdio.h>

void main(){
   int array[10] = {10,20,30,40,50,60,70,80,90,100};
   int array2[10];
   for(int i=0,j=9; i<10; i++,j--){
        array2[i]=array[j];
   }
   for(int i=0; i<=9; i++){
    array[i]=array2[i];
   }
   for(int i=0; i<=9; i++){
    printf("%d\n",array[i]);
   }
}
