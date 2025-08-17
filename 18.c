// 18. WAP to reverse a number
#include <stdio.h>
int main() {
    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("Reversed number = %d\n", rev);
    return 0;
}

