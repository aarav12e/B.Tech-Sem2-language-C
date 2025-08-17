//Write a C program to read temperature in Centigrade and convert it into Fahrenheit
#include <stdio.h>
int main() {
    float c, f;
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %.2f\n", f);
    return 0;
}

