// Write a C expression that evaluates whether a number is divisible by both 2 and 3 (without using the modulus operator).
#include <stdio.h>

int main() {
    int a;
    printf("eneter the number:");
    scanf("%d", &a);
    if (a / 2 == a && a / 3 == a){
        printf("its is dividsible");
    }else{
        printf("not divisible");


return 0;
}
