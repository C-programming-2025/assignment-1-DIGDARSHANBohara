// Given three variables a, b, and c, write an expression that checks if a is greater than b and c is not equal to 0.
#include <stdio.h>

    int main() {
        int a , b, c;
        printf("enter three numbers:");
        scanf("%d %d %d", &a, &b , &c);
        if (a > b && c != 0) {
            printf("true\n");
        }else{
            printf("flase\n");
        } 

    
        

    
        

    return 0;
    }