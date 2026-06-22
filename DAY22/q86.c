#include <stdio.h>
#include <stdbool.h>

int countWords(char str[]) {
    int count = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the current character is a whitespace character
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = false; // We are in a space, so we are not in a word
        } 
        // If the character is not a space and we weren't already in a word
        else if (!inWord) {
            inWord = true;  // We found the start of a new word
            count++;        // Increment word count
        }
    }

    return count;
}

int main() {
    // Using a large buffer to allow a full sentence input
    char sentence[200];

    printf("Enter a sentence: ");
    // fgets is used instead of scanf because scanf stops reading at the first space
    fgets(sentence, sizeof(sentence), stdin);

    int totalWords = countWords(sentence);
    printf("Total number of words: %d\n", totalWords);

    return 0;
}