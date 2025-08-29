// Write an expression that checks if a number is both positive and even.
#include <stdio.h>

int main() {
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if (a > 0 && a % 2 == 0){
        printf("a is positive\n");
    }else{
        printf("not positive and even");
    }




 return 0;
}