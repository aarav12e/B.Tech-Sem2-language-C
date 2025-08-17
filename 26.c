// 26. WAP to add and multiply two matrices of order nxn
#include <stdio.h>
int main() {
    int a[10][10], b[10][10], sum[10][10], prod[10][10];
    int i, j, k, n;
    printf("Enter order of matrix (n): ");
    scanf("%d", &n);

    printf("Enter elements of matrix A:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of matrix B:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    printf("Sum of matrices:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("Product of matrices:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            prod[i][j] = 0;
            for(k = 0; k < n; k++)
                prod[i][j] += a[i][k] * b[k][j];
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}
