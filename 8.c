//Write a C program to read an integer from the user and check whether the number is even or odd. Display the result.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Even number\n");
    else
        printf("Odd number\n");
    return 0;
}

