// Write a C program to swap the values of two variables using a temporary variable.
#include <stdio.h>

int main() {
    int a= 6;
    int b= 9;
    int temp;
    printf("before swap:a=%d,b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swap:a=%d, b=%d\n",a,b);
    



return 0;
}