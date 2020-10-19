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
