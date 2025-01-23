#include <stdio.h>

void display_transpose(int matrix[][100], int rows, int cols) {
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", matrix[j][i]); 
        }
        printf("\n");
    }
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

    display_transpose(matrix, rows, cols);

    return 0;
}