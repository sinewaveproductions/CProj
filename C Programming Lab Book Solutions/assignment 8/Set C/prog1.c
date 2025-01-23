#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void getMatrix(int matrix[][MAX_COLS], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int matrix1[][MAX_COLS], int matrix2[][MAX_COLS], int result[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrices(int matrix1[][MAX_COLS], int matrix2[][MAX_COLS], int result[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void multiplyMatrices(int matrix1[][MAX_COLS], int matrix2[][MAX_COLS], int result[][MAX_COLS], int rows1, int cols1, int rows2, int cols2) {
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible. Incompatible dimensions.\n");
        return;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int rows1, cols1, rows2, cols2, choice;
    int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];

    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns for matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter elements of matrix 1:\n");
    getMatrix(matrix1, rows1, cols1);

    printf("Enter elements of matrix 2:\n");
    getMatrix(matrix2, rows2, cols2);

    do {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (rows1 == rows2 && cols1 == cols2) {
                    addMatrices(matrix1, matrix2, result, rows1, cols1);
                    printf("\nResultant Matrix (Addition):\n");
                    printMatrix(result, rows1, cols1);
                } else {
                    printf("Matrix addition not possible. Incompatible dimensions.\n");
                }
                break;
            case 2:
                if (rows1 == rows2 && cols1 == cols2) {
                    subtractMatrices(matrix1, matrix2, result, rows1, cols1);
                    printf("\nResultant Matrix (Subtraction):\n");
                    printMatrix(result, rows1, cols1);
                } else {
                    printf("Matrix subtraction not possible. Incompatible dimensions.\n");
                }
                break;
            case 3:
                multiplyMatrices(matrix1, matrix2, result, rows1, cols1, rows2, cols2);
                if (cols1 == rows2) {
                    printf("\nResultant Matrix (Multiplication):\n");
                    printMatrix(result, rows1, cols2);
                }
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}