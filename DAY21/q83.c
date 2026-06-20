#include <stdio.h>

int main() {
    char str[150];
    int vowels = 0, consonants = 0;

    // 1. Input the string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // 2. Loop through each character until the null terminator
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if the character is an alphabet letter
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            
            // Check if it's a vowel (handles both upper and lower case)
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } 
            // If it's an alphabet letter but not a vowel, it must be a consonant
            else {
                consonants++;
            }
        }
    }

    // 3. Print the final counts
    printf("\nTotal Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}