// Given three variables a, b, and c, write an expression that checks if a is equal to b and b is not equal to c.
#include <stdio.h>

int main() {
    int a , b , c;
    printf("enter 3 numbers");
    scanf("%d %d %d",&a, &b,&c);
    if (a==b && b !=c){
        printf("condition true\n");
    }else{
        printf("false\n");
    }


return 0;
}