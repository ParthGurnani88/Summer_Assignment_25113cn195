#include <stdio.h>

int main() {
    char str[100];

    // 1. Input the string
    printf("Enter a string in lowercase: ");
    scanf("%[^\n]", str);

    // 2. Convert to uppercase
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is strictly a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase using ASCII difference
        }
    }

    // 3. Print the modified string
    printf("Uppercase string: %s\n", str);

    return 0;
}