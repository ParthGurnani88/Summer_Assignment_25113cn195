#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // 1. Print the leading spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        
        // 2. Count UP from 1 to the current row number (i)
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        
        // 3. Count DOWN from (i - 1) back to 1
        for (int k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }
        
        // 4. Move to the next line
        printf("\n");
    }

    return 0;
}