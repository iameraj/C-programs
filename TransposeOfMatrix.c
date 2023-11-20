#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols);
void transposeMatrix(int original[MAX_ROWS][MAX_COLS], int transposed[MAX_ROWS][MAX_COLS], int rows, int cols);

int main() {
    int rows, cols;

    // Input the size of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Error: Matrix size exceeds the maximum allowed size.\n");
        return 1;  // Exit with an error code
    }

    int matrix[MAX_ROWS][MAX_COLS];

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    displayMatrix(matrix, rows, cols);

    // Transpose the matrix
    int transposed[MAX_ROWS][MAX_COLS];
    transposeMatrix(matrix, transposed, rows, cols);

    // Display the transposed matrix
    printf("\nTransposed Matrix:\n");
    displayMatrix(transposed, cols, rows);

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

void transposeMatrix(int original[MAX_ROWS][MAX_COLS], int transposed[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = original[i][j];
        }
    }
}

