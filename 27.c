// 27. WAP to find the sum of diagonal elements of a mxn matrix
#include <stdio.h>
int main() {
    int m, n, i, j, mat[10][10], sum = 0;
    printf("Enter rows and columns: ");
    scanf("%d%d", &m, &n);
    printf("Enter matrix:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    for(i = 0; i < m && i < n; i++)
        sum += mat[i][i];
    printf("Sum of main diagonal = %d\n", sum);
    return 0;
}
