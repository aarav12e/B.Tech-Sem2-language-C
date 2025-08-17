//Write a C program to read an integer n from the user and calculate the sum of all natural numbers from 1 to n. Display the result.
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) sum += i;
    printf("Sum = %d\n", sum);
    return 0;
}
