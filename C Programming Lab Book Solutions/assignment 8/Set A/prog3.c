#include <stdio.h>

int main() {
    int rows, cols;


    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Matrix must be square for this operation.\n");
        return 1; 
    }

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    int left_diagonal_sum = 0;
    int right_diagonal_sum = 0;

    for (int i = 0; i < rows; i++) {
        left_diagonal_sum += matrix[i][i];
        right_diagonal_sum += matrix[i][cols - 1 - i];
    }

    printf("\nSum of left diagonal elements: %d\n", left_diagonal_sum);
    printf("Sum of right diagonal elements: %d\n", right_diagonal_sum);

    return 0;
}