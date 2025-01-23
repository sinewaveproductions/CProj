#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);

    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}