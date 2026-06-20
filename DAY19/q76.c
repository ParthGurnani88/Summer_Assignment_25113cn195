#include <stdio.h>

int main() {
    int n, main_sum = 0, secondary_sum = 0;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Single loop logic to find both diagonal sums
    for (int i = 0; i < n; i++) {
        main_sum += matrix[i][i];                  // Elements like [0][0], [1][1], [2][2]
        secondary_sum += matrix[i][n - 1 - i];     // Elements like [0][2], [1][1], [2][0]
    }

    // Display the results
    printf("\nSum of Principal (Main) Diagonal: %d\n", main_sum);
    printf("Sum of Secondary Diagonal: %d\n", secondary_sum);

    return 0;
}