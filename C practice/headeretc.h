#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MIN -1
#define PI (2 * acos(0))

void program_1() {
    printf("Value of MIN : %d\n", MIN);
    printf("Value of PI : %lf\n", PI);
}

#define p 50
#define q 60

void program_2() {
    int a = p, b = q;
    printf("a = %d, b = %d\n", a, b);
}

#define MAX(a, b) (a>b? a:b)

void macro(){
    int a = 83, b = 323;
    double d1 = 8.32323, d2 = 3.33332323;
    printf("maximum of %d and %d is %d\n", a, b, MAX(a, b));
    printf("maximum of %d and %d is %d\n", d1, d2, MAX(d1, d2));
}

#define SWAP(a, b){\
                a^=b;\
                b^=a;\
                a^=b;\
}

void macro_2() {
    int a = 83, b = 323;
    printf("a = %d, b = %d\n", a, b);
    SWAP(a,b);
    printf("a = %d, b = %d\n", a, b);
}

enum COLOR {RED, GREEN, BLUE};

void Enum() {
    int num;
    enum COLOR selected_color;
    printf("Enter 1 for RED, 2 for GREEN, 3 for BLUE: ");
    scanf("%d", &num);
    if(num == 1){
        selected_color = RED;
    }
    else if(num == 2){
        selected_color = GREEN;
    }
    else{
        selected_color = BLUE;
    }
    printf("Selected color : %d\n", selected_color);
}

enum COLOR_2 {NO_COLOR, RED_1 , GREEN_1, BLUE_1};

void Enum_2() {
    printf("value : %d\n", NO_COLOR);
    printf("value : %d\n", RED_1);
    printf("value : %d\n", GREEN_1);
    printf("value : %d\n", BLUE_1);
}

enum COLOR_3 {NO_COLOR_1 = 0, RED_2 = 40, GREEN_2 = 44, BLUE_2 = 60};

void Enum_3() {
    printf("value : %d\n", NO_COLOR_1);
    printf("value : %d\n", RED_2);
    printf("value : %d\n", GREEN_2);
    printf("value : %d\n", BLUE_2);
}

enum DAY {SUNDAY, MONDAY, TUSEDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

void Enum_4() {
    enum DAY today;
    today = THURSDAY;

    switch (today) {
    case SUNDAY:
        printf("Today is Sunday. It is a work day\n");
        break;
    case MONDAY:
        printf("Today is Monday. It is a work day\n");
        break;
    case TUSEDAY:
        printf("Today is Tuseday. It is a work day\n");
        break;
    case THURSDAY:
        printf("Today is Thursday. It is a work day\n");
        break;
    case FRIDAY:
        printf("Today is Friday. It is a work day\n");
        break;
    case SATURDAY:
        printf("Today is Saturday. It is a work day\n");
        break;
    default:
        printf("Many items\n");
    }
}
