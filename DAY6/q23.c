#include <stdio.h>

// Function to count set bits
int countSetBits(int n) {
    int count = 0;
    
    while (n > 0) {
        // This expression clears the lowest set bit
        n = n & (n - 1);
        count++;
    }
    
    return count;
}

int main() {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) == 1) {
        // Handle negative numbers by treating them as unsigned
        int result = countSetBits(num);
        printf("Number of set bits (1s): %d\n", result);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}