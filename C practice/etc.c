#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
    if(argc !=2){
        printf("Enter one argument(your name):\n");
        return;
    }
    printf("Welcome %s\n", argv[1]);

}
