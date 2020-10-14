#include "2DArrayHeader.h"

void main() {
    int number[5][5] = {{6,4,7,8,9},
    {3,7,1,9,9},{8,6,4,2,7},
    {2,4,2,5,9},{4,1,6,7,3}};
    D_Array_row_count(number);
    Array_column_count(number);
    column_to_row(number);
}
