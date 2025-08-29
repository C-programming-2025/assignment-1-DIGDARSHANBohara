// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.
#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;
    int sum;
    printf("enter 2 number:");
    scanf("%d %d",&a, &b);
    sum = (int)round(sqrt(a + b));

    printf("sum is %d\n",sum);




     return 0;
}