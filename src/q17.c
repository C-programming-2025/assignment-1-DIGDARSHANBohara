// Create an expression that checks if a given character is an uppercase letter.
#include <stdio.h>

int main() {
    char ch;
       int result;

    printf("Enter a character: ");
    scanf("%c", &ch);
    result = (ch >= 'A' && ch <= 'Z');

    printf("%d", result);




     return 0;
}