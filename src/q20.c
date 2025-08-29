// Write an expression that checks if a number is a multiple of either 3 or 5.
#include <stdio.h>

int main() {
    int x;
    printf("enter a number:");
    scanf("%d", &x);
    if (x % 3 == 0 || x % 5==0){
         printf("%d is a multiple of 3 or 5\n", x);
    }else{
        printf("not a multiple");
    }
return 0;
}

