// 24. WAP to search element in array (Linear Search)
#include <stdio.h>
int main() {
    int n, arr[100], key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            printf("Element found at index %d\n", i);
            break;
        }
    }
    if(!found) printf("Element not found\n");
    return 0;
}
