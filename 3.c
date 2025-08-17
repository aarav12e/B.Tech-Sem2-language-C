//Write a C program to read the radius of a circle and calculate its area and circumference using the formula:
#include <stdio.h>
#define PI 3.1416
int main() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area = %.2f\nCircumference = %.2f\n", PI*r*r, 2*PI*r);
    return 0;
}
