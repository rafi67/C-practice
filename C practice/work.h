#include <stdio.h>

void sum(int n1, int n2) {
    int Sum = n1+n2;
    printf("Sum is %d\n",Sum);
}

double add(double num1, double num2){
    double num = num1+num2;
    return num;
}

int test_function(int x) {
    int y = x;
    x = 2*y;
    return (x*y);
}

void result() {
    int x = 10, y = 20, z = 30;
    z = test_function(x);
    printf("%d %d %d\n",x,y,z);
}

void max_result() {
    int arra[] = {-100, 0, 53, 22, 83, 23,
    89, -132, 201, 3, 85};
    int n = 11;
    int Max = find_max(arra,n);
    int Min = find_min(arra,n);
    printf("Max integer is %d\n",Max);
    printf("Min integer is %d\n",Min);
}

int find_max(int arr[], int n1) {
    int maxNumber = arr[0];
    for(int i=0; i<n1; i++){
        if(maxNumber<arr[i]){
            maxNumber = arr[i];
        }
    }
    return maxNumber;
}

int find_min(int arr[], int n1) {
    int minNumber = arr[0];
    for(int i=0; i<n1; i++){
        if(minNumber>arr[i]){
            minNumber = arr[i];
        }
    }
    return minNumber;
}

void replace_Element(int arra[]) {
    arra[0] = 100;
}

void Test() {
    int arra[] = {1,2,3,4,5};
    printf("%d\n",arra[0]);
    replace_Element(arra);
    printf("%d\n",arra[0]);
}

void sqrt() {
    double pi = 3.14;
    double r = 2.34;
    double result = pi*r*r;
    printf("Result is %0.00lf\n",result);
}

void binary_searchFunction(int arra[], int num, int max_index) {
    int low_index = 0;
    int high_index = max_index;
    int mid_index;

    while(low_index<=high_index){
        mid_index = (low_index+high_index)/2;

        if(arra[mid_index]==num){
            printf("%d is found in the array. And it is the %d element of the array\n",
                   arra[mid_index],mid_index);
            break;
        }
        if(arra[mid_index]<num){
            low_index = mid_index+1;
        }
        else{
            high_index = mid_index-1;
        }
        if(low_index>high_index){
            printf("%d is not found in the array\n",num);
        }
    }
}
