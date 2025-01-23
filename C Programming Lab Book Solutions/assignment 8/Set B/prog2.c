
#include <stdio.h>

void display_diagonal_sum(int matrix[][100], int rows, int cols) {
    if (rows != cols) {
        printf("Matrix must be square for this operation.\n");
        return;
    }

    int left_diagonal_sum = 0;
    int right_diagonal_sum = 0;

    for (int i = 0; i < rows; i++) {
        left_diagonal_sum += matrix[i][i];
        right_diagonal_sum += matrix[i][cols - 1 - i];
    }

    printf("\nSum of left diagonal elements: %d\n", left_diagonal_sum);
    printf("Sum of right diagonal elements: %d\n", right_diagonal_sum);
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    display_diagonal_sum(matrix, rows, cols);

    return 0;
}