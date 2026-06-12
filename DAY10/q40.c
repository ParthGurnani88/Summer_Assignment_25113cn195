#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // 1. Print leading spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        
        // 2. Count UP from 'A' to the target character for this row
        for (int k = 1; k <= i; k++) {
            printf("%c", 'A' + k - 1);
        }
        
        // 3. Count DOWN from the peak character back to 'A'
        for (int k = i - 1; k >= 1; k--) {
            printf("%c", 'A' + k - 1);
        }
        
        // 4. Move to the next line
        printf("\n");
    }

    return 0;
}