#include <stdio.h>

int indexSequentialSearch(int arr[], int index[], int n, int key, int blockSize) {
    int i;

    // Step 1: Find block
    for (i = 0; i < n / blockSize; i++) {
        if (key < index[i])
            break;
    }

    // Step 2: Linear search in block
    int start = i * blockSize;
    int end = start + blockSize;

    for (int j = start; j < end && j < n; j++) {
        if (arr[j] == key)
            return j;
    }

    return -1;
}

int main() {
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int index[] = {10,40,70};
    int n = 9, key = 70, blockSize = 3;

    int pos = indexSequentialSearch(arr, index, n, key, blockSize);

    if (pos != -1)
        printf("Element found at index %d\n", pos);
    else
        printf("Element not found\n");

    return 0;
}
