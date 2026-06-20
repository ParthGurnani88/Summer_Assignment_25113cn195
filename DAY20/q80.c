#include <stdio.h>

int main() {
    int rows, cols;

    // 1. Get matrix dimensions
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // 2. Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Calculate and print column-wise sum
    printf("\nColumn-wise Sums:\n");
    for (int j = 0; j < cols; j++) {
        int colSum = 0; // Reset sum for every new column
        
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j]; // Add each element down the column
        }
        
        printf("Sum of Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}