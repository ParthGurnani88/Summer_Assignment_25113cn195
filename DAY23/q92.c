#include <stdio.h>
#include <string.h>

char getMaxOccurringChar(char str[]) {
    int freq[256] = {0};
    int maxCount = 0;
    char maxChar = '\0';

    // Step 1: Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Step 2: Find the maximum frequency in the array
    for (int i = 0; i < 256; i++) {
        // Skip spaces and newlines if you only want letters/symbols
        if (i == ' ' || i == '\n' || i == '\r' || i == '\t') {
            continue;
        }

        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxChar = (char)i;
        }
    }

    return maxChar;
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline

    char result = getMaxOccurringChar(str);

    if (result != '\0') {
        printf("The maximum occurring character is: '%c'\n", result);
    } else {
        printf("String is empty or contains invalid characters.\n");
    }

    return 0;
}