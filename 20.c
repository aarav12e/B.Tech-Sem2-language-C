// 20. WAP to convert binary to decimal and vice versa
#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);
    if(choice == 1) {
        int bin, dec = 0, base = 1, rem;
        printf("Enter binary number: ");
        scanf("%d", &bin);
        while(bin) {
            rem = bin % 10;
            dec += rem * base;
            base *= 2;
            bin /= 10;
        }
        printf("Decimal = %d\n", dec);
    } else {
        int dec, bin[32], i = 0;
        printf("Enter decimal number: ");
        scanf("%d", &dec);
        while(dec > 0) {
            bin[i++] = dec % 2;
            dec /= 2;
        }
        printf("Binary = ");
        for(int j = i-1; j >= 0; j--) printf("%d", bin[j]);
        printf("\n");
    }
    return 0;
}

