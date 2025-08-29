/* Write a C program to convert temperature from Celsius to Fahrenheit. Prompt the user for a
temperature in Celsius and display the equivalent temperature in Fahrenheit.
(Formula: fahrenheit = (celsius * 9 / 5) + 32) */

#include <stdio.h>

int main() {
    float tempC ;
    float tempF;
    printf("enter the temprature in Celcius: ");
    scanf("%f" , &tempC);
    tempF=  (tempC * 9 / 5) + 32;
    printf("Temprature in Fahrenheit: %f\n",tempF);



 return 0;
}