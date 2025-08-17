// Write a C program to read a year from the user and check whether it is a leap year or not using the following condition:

// A year is a leap year if it is divisible by 4 but not by 100, or it is divisible by 400.
#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
    return 0;
}
