//Write a C program to input Principal amount, Rate of interest, and Time from the user, then calculate and display Simple Interest (SI) and Compound Interest (CI)
#include <stdio.h>
#include <math.h>
int main() {
    float p, r, t, si, ci;
    printf("Enter Principal, Rate and Time: ");
    scanf("%f%f%f", &p, &r, &t);
    si = (p*r*t)/100;
    ci = p * pow((1 + r/100), t) - p;
    printf("Simple Interest = %.2f\nCompound Interest = %.2f\n", si, ci);
    return 0;
}
