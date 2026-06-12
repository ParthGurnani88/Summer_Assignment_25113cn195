#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = rows; i >= 1; i--) {
        // 1. Print the leading spaces
        for (int j = 0; j < rows - i; j++) {
            printf(" ");
        }
        
        // 2. Print the asterisks
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        // 3. Move to the next line
        printf("\n");
    }

    return 0;
}