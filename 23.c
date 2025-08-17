// 23. WAP to find minimum and maximum in array
#include <stdio.h>
int main() {
    int n, arr[100], min, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    min = max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    printf("Minimum = %d\nMaximum = %d\n", min, max);
    return 0;
}
