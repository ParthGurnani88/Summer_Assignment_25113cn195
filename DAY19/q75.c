#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    // The transpose matrix has inverted dimensions: [cols][rows]
    int transpose[cols][rows]; 

    // Input elements of the matrix
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Logic for Transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Row index becomes column index, and vice versa
            transpose[j][i] = matrix[i][j]; 
        }
    }

    // Displaying the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Displaying the transposed matrix
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < cols; i++) { // Notice the loop runs up to 'cols' now
        for (int j = 0; j < rows; j++) { // and 'rows' here
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}