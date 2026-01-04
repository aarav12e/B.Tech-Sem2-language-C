#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[20], n, i, item, loc = -1;
    int beg, end, mid;

    printf("Enter number of elements (<=20): ");
    scanf("%d", &n);

    if (n > 20 || n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter item to search: ");
    scanf("%d", &item);

    beg = 0;
    end = n - 1;

    while (beg <= end) {
        mid = (beg + end) / 2;

        if (a[mid] == item) {
            loc = mid;
            break;
        }
        else if (item < a[mid]) {
            end = mid - 1;
        }
        else {
            beg = mid + 1;
        }
    }

    if (loc != -1)
        printf("Item found at location %d\n", loc);
    else
        printf("Item not found\n");

    return 0;
}
