// 14. WAP to print sum of even and odd numbers from 1 to N
#include <stdio.h>
int main() {
    int n, even = 0, odd = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) even += i;
        else odd += i;
    }
    printf("Sum of even = %d\nSum of odd = %d\n", even, odd);
    return 0;
}
