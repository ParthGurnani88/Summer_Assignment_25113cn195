#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
long long binaryToDecimal(long long n) {
    long long decimalNumber = 0;
    int i = 0, remainder;

    while (n != 0) {
        // Get the last digit of the binary number
        remainder = n % 10;
        
        // Remove the last digit from the binary number
        n /= 10;
        
        // If the digit is 1, add 2^i to the decimal total
        if (remainder == 1) {
            decimalNumber += pow(2, i);
        } else if (remainder != 0) {
            printf("Error: Input is not a valid binary number.\n");
            return -1;
        }
        
        // Increment the position/exponent
        i++;
    }

    return decimalNumber;
}

int main() {
    long long binaryNumber;

    printf("Enter a binary number: ");
    if (scanf("%lld", &binaryNumber) == 1) {
        long long decimalNumber = binaryToDecimal(binaryNumber);
        
        if (decimalNumber != -1) {
            printf("Decimal equivalent: %lld\n", decimalNumber);
        }
    } else {
        printf("Invalid input. Please enter numbers only.\n");
    }

    return 0;
}