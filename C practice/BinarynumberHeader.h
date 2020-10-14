#include<stdio.h>
#include<string.h>
#include<math.h>

void binaryNumber() {
    char binary[65];
    int len, decimal, power, i;
    printf("Enter the binary number: ");
    scanf("%s", binary);
    decimal = 0;
    len = strlen(binary);
    power = len-1;
    for(i=0; i<len; i++){
        if(binary[i]=='0'){
            decimal += (pow(2,power)*0);
            power--;
        }
        else{
            decimal += pow(2,power);
            power--;
        }
    }
    printf("Decimal value is %d\n", decimal);
}

void decimalNumber() {
    int decimal;
    printf("Enter a decimal value:");
    scanf("%d",&decimal);
    int n1, power, k=0;
    char binary[65];
    int number[8] = {1,2,4,8,16,32,64,128};
    for(int i=0; i<8; i++){
        if(i==6){
            if(number[i]<=decimal){
                power = i;
                power--;
                n1 = number[i]+pow(2,power);
                binary[k] = '1';
                k++;
                for(int j=0; j<i; j++){
                    if(n1<=decimal){
                        n1 = n1+pow(2,power);
                        power--;
                        binary[k] = '1';
                        k++;
                    }
                    else{
                        n1 = n1-pow(2,power);
                        power--;
                        binary[k] = '0';
                        k++;
                    }
                }
            }
        }
    }
        printf("%s",binary);
}

void decimalNumber2() {
    int number[8] ={1,2,4,8,16,32,64,128};
    int decimal;
    char binary[100];
    int n1, k=0;
    printf("Enter a decimal value:");
    scanf("%d",&decimal);
    int power = 5;
    if(number[6]<=decimal){
        binary[k] = '1';
        k++;
        n1 = number[6];
        power--;
    }
    for(int i=0; i<6; i++){
        n1 = n1+pow(2,power);
        if(n1<=decimal){
            binary[k] = '1';
            k++;
            power--;
        }
        else{
            binary[k] = '0';
            k++;
            n1 = n1-pow(1,power);
            power--;
        }
    }
    binary[k] = '\0';
    printf("%s",binary);
}

void decimalNumber3() {
    int decimal;
    printf("Enter a decimal value:");
    scanf("%d",&decimal);
    int result;
    int result2;
    char binary[20];
    int i=0;
    result = decimal/2;
    result2 = decimal%2;
    if(result2==1){
        binary[i] = '1';
        i++;
    }
    else{
        binary[i] = '0';
        i++;
    }

    while(result!=0){
        result2 = result%2;
        if(result2==1){
            binary[i] = '1';
            i++;
        }
        else{
            binary[i] = '0';
            i++;
        }
        result = result/2;
    }
    printf("%s",binary);
}
