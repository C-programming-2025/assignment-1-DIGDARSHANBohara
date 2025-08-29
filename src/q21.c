// Create an expression that swaps the values of three variables x, y, and z in a cyclic order (i.e., x becomes y, y becomes z, and z becomes x).
#include <stdio.h>

int main() {
    int x=2;
    int y=4;
    int z=5;
    int r;
    r=x;
    x=y;
    y=z;
    z=r;
    printf("swapped x=%d, y=%d , z=%d", x,y,z);
    return 0;
}