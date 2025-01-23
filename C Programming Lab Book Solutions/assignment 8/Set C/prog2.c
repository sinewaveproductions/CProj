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

    printf("\nSum of elements in each row:\n");
    for (i = 0; i < m; i++) {
        int row_sum = 0;
        for (j = 0; j < n; j++) {
            row_sum += matrix[i][j];
        }
        printf("Row %d: %d\n", i + 1, row_sum);
    }

    return 0;
}