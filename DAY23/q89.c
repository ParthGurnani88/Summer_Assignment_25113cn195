#include <stdio.h>
#include <string.h>

char findFirstNonRepeating(char str[]) {
    int freq[256] = {0}; // Array to store character counts

    // Pass 1: Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Pass 2: Scan the string from left to right 
    // and find the first character with a frequency of 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return str[i]; // Found it!
        }
    }

    return '\0'; // Return null character if all characters repeat
}

int main() {
    char str[200];

    printf("Enter a string: ");
    // Read string including spaces (stripping the trailing newline if present)
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    char result = findFirstNonRepeating(str);

    if (result != '\0') {
        if (result == ' ') {
            printf("The first non-repeating character is: [Space]\n");
        } else {
            printf("The first non-repeating character is: '%c'\n", result);
        }
    } else {
        printf("All characters are repeating or the string is empty.\n");
    }

    return 0;
}