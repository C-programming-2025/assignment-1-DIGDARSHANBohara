// Create an expression that checks if a given number is a perfect square.
#include <stdio.h>

int main() {
    int a;
    int persq;
    printf("eneter a number:");
    scanf("%d", &a);
    persq=(int)round(squart(a));
    if (persq * persq == a){
        printf("its perfect square");
    }else{
        printf("its not a perfect square");
    }

    return 0;
}