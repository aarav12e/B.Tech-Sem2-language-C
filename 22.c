// 22. WAP to add two arrays
#include <stdio.h>
int main() {
    int a[100], b[100], c[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements of first array: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter elements of second array: ");
    for(int i = 0; i < n; i++) scanf("%d", &b[i]);
    for(int i = 0; i < n; i++) c[i] = a[i] + b[i];
    printf("Sum array: ");
    for(int i = 0; i < n; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}