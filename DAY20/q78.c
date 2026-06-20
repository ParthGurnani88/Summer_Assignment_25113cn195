#include <stdio.h>

int main() {
    int rows, cols;
    int isSymmetric = 1; // 1 means true, 0 means false

    // 1. Get dimensions
    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Rule check: A symmetric matrix MUST be square
    if (rows != cols) {
        printf("The matrix is NOT symmetric (it must be a square matrix).\n");
        return 0;
    }

    int matrix[rows][cols];

    // 2. Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Check for symmetry
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Compare element with its transposed counterpart
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Found a mismatch
                break;           // Exit the inner loop early
            }
        }
        if (!isSymmetric) break; // Exit the outer loop early
    }

    // 4. Output the result
    if (isSymmetric == 1) {
        printf("\nThe matrix is Symmetric.\n");
    } else {
        printf("\nThe matrix is NOT Symmetric.\n");
    }

    return 0;
}