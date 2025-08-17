// 19. WAP to print Armstrong numbers from 1 to 1000
#include <stdio.h>
#include <math.h>
int main() {
    int num, original, rem, result, n;
    printf("Armstrong numbers from 1 to 1000:\n");
    for(num = 1; num <= 1000; num++) {
        original = num;
        n = log10(num) + 1;
        result = 0;
        while(original) {
            rem = original % 10;
            result += pow(rem, n);
            original /= 10;
        }
        if(result == num) printf("%d\n", num);
    }
    return 0;
}
