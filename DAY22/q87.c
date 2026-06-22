#include <stdio.h>
#include <string.h>

void countCharacterFrequency(char str[]) {
    // Array to store the count of all 256 ASCII characters, initialized to 0
    int freq[256] = {0};

    // Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        // We cast the char to unsigned char to prevent negative indexing 
        // if extended ASCII characters are encountered.
        freq[(unsigned char)str[i]]++;
    }

    // Print the frequencies
    printf("\nCharacter Frequencies:\n");
    printf("---------------------\n");
    for (int i = 0; i < 256; i++) {
        // Only print characters that appeared at least once
        // Exclude newlines '\n' or carriage returns '\r' from printing to keep output clean
        if (freq[i] > 0 && i != '\n' && i != '\r') {
            if (i == ' ') {
                printf("[Space] : %d\n", freq[i]);
            } else {
                printf("   '%c'  : %d\n", i, freq[i]);
            }
        }
    }
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countCharacterFrequency(str);

    return 0;
}