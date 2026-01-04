#include <stdio.h>

int sequentialSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;   // element found
    }
    return -1;          // element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key = 30;

    int pos = sequentialSearch(arr, n, key);

    if (pos != -1)
        printf("Element found at index %d\n", pos);
    else
        printf("Element not found\n");

    return 0;
}
