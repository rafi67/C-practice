#include "HeaderString.h"

void main() {
    stringShow();
    displayString();
    displayString2();
    char country1[] = {'B','a','n','g','l','a','d','e','s','h','\0'};
    toUperCase(country1,10);
    char country[] = "Bangladesh";
    toLowerCase(country,10);
    concatenate_string();
    char a[] = "Bangladesh";
    char b[] = "Bangladesh";
    int number = string_compare(a,b);
    printf("%d",number);
}
