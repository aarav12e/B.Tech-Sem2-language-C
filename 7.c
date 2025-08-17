#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("%d is greatest\n", a);
    else if (b >= a && b >= c)
        printf("%d is greatest\n", b);
    else
        printf("%d is greatest\n", c);
    return 0;
}