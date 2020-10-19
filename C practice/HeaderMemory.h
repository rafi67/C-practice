#include <stdio.h>

void program_1() {
    int i;
    for(int i=33; i<=126; i++){
        printf("ADCII code for %c is %d\n",i,i);
    }
}

void program_2() {
    char small_letter, capital_letter;
    printf("Please enter a small letter: ");
    small_letter = getchar();
    capital_letter = small_letter - 32;
    printf("Capital letter is %c",capital_letter);
}

void program_3() {
    char Character;
    printf("Please enter a character: ");
    Character = getchar();
    if(Character>=48 && Character<=57){
        printf("1");
    }
    else{
        printf("0");
    }
}

void program_4() {
    char ch1 = 'A', ch2 = 'B';
    int n1 = 100, n2 = 100000;
    printf("Value of ch1 = %c,\t",ch1);
    printf("Address of ch1 = %p\n",&ch1);
    printf("Value of ch2 = %d,\t",ch2);
    printf("Address of ch2 = %p\n",&ch2);
    printf("Value of n1 = %d,\t",n1);
    printf("Address of n1 = %p\n",n1);
    printf("Value of n2 = %d,\t",n2);
    printf("Address of n2 = %p\n",n2);
}

void program_5() {
    int arra[5] = {50,60,70,80,90};
    printf("Value of Array: %d, %d, %d, %d, %d\n",arra[0],
           arra[1],arra[2],arra[3],arra[4]);
    printf("Address of arra is %p\n", arra);
    printf("Address of arra[0] is %p\n", &arra[0]);
    printf("Address of arra[1] is %p\n", &arra[1]);
    printf("Address of arra[2] is %p\n", &arra[2]);
    printf("Address of arra[3] is %p\n", &arra[3]);
    printf("Address of arra[4] is %p\n", &arra[4]);
}
