// Given two variables x and y, write an expression that calculates the average of their values.
#include <stdio.h>

int main() {
    int x;
    int y;
    int avg;
     printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    avg= (x+y)/2;
    printf("average value is %d\n",avg);

return 0;
}