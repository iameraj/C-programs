#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols);
void addMatrices(int matrix1[MAX_ROWS][MAX_COLS], int matrix2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows, int cols);

int main() {
    int rows, cols;

    // Input the size of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Error: Matrix size exceeds the maximum allowed size.\n");
        return 1;  // Exit with an error code
    }

    int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS];

    // Input the elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input the elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Display the original matrices
    printf("\nFirst Matrix:\n");
    displayMatrix(matrix1, rows, cols);

    printf("\nSecond Matrix:\n");
    displayMatrix(matrix2, rows, cols);

    // Add the matrices
    int result[MAX_ROWS][MAX_COLS];
    addMatrices(matrix1, matrix2, result, rows, cols);

    // Display the result matrix
    printf("\nSum Matrix:\n");
    displayMatrix(result, rows, cols);

    return 0;
}

void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int matrix1[MAX_ROWS][MAX_COLS], int matrix2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

