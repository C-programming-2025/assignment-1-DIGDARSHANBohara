// Create an expression that swaps the values of two variables x and y without using a temporary variable.
#include <stdio.h>

int main() {
    int x;
    int y;
   
    printf("3 nums");
    scanf("%d %d ",&x ,&y);
    x= x+y;
    y=x-y;
    x=x-y;
      

    printf("swapped x=%d, y=%d\n",x,y);
return 0;
}