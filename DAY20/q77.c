#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // 1. Get dimensions of the matrices
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Rule check: Columns of A must equal Rows of B
    if (c1 != r2) {
        printf("Error! Multiplication not possible.\n");
        return 1; 
    }

    // 2. Declare matrices with user-defined sizes
    int A[r1][c1], B[r2][c2], C[r1][c2];

    // 3. Input elements for Matrix A
    printf("\nEnter elements for Matrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // 4. Input elements for Matrix B
    printf("\nEnter elements for Matrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // 5. Initialize result matrix C to 0 and multiply
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0; // Clear the cell before adding
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // 6. Print the result
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}