#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // 1. Print the leading spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        
        // 2. Print the asterisks (odd numbers: 1, 3, 5, 7, 9)
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        // 3. Move to the next line
        printf("\n");
    }

    return 0;
}