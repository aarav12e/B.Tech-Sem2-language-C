// 30. WAP to swap two elements using pointers
#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    swap(&x, &y);
    printf("Swapped values: x = %d, y = %d\n", x, y);
    return 0;
}
