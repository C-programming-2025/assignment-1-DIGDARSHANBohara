// Input a number representing days and print the equivalent number of weeks and days.
// Example: 
// Input = 10
// Output = "1 week and 3 days"
#include <stdio.h>

int main() {
    int days;
    int weekD;
    int day_left;
    printf("No. of days:");
    scanf("%d", &days);
    weekD = days / 7;        
    day_left = days % 7;
    printf("%d weeks and %d days\n,",  weekD ,day_left);
    return 0;
}

