#include <stdio.h>

void find_largest_smallest(int matrix[][100], int rows, int cols, int *largest, int *smallest) {
    *largest = matrix[0][0];
    *smallest = matrix[0][0]; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > *largest) {
                *largest = matrix[i][j];
            }
            if (matrix[i][j] < *smallest) {
                *smallest = matrix[i][j];
            }
        }
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

    int largest, smallest;
    find_largest_smallest(matrix, rows, cols, &largest, &smallest);

    printf("\nLargest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}