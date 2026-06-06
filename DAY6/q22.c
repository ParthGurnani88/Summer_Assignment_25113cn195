#include <stdio.h>
#include <string.h>

// Function to convert binary string to decimal
long long binaryToDecimal(char binary[]) {
    long long decimalNumber = 0;
    int length = strlen(binary);

    for (int i = 0; i < length; i++) {
        // Check from left to right
        if (binary[i] == '1') {
            // Shift left (multiply by 2) and add 1
            decimalNumber = (decimalNumber << 1) | 1;
        } 
        else if (binary[i] == '0') {
            // Shift left (multiply by 2) and add 0
            decimalNumber = decimalNumber << 1;
        } 
        else {
            // Handle invalid characters (like letters or spaces)
            printf("Error: Invalid binary digit '%c' detected.\n", binary[i]);
            return -1;
        }
    }

    return decimalNumber;
}

int main() {
    char binaryString[65]; // Can hold up to a 64-bit binary number + null terminator

    printf("Enter a binary number: ");
    // Read input securely to prevent buffer overflow
    if (scanf("%64s", binaryString) == 1) {
        long long decimalResult = binaryToDecimal(binaryString);
        
        if (decimalResult != -1) {
            printf("Decimal equivalent: %lld\n", decimalResult);
        }
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}