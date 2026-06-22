#include <stdio.h>

void removeSpaces(char str[]) {
    int i = 0; // Pointer to read the string
    int j = 0; // Pointer to write the non-space characters

    while (str[i] != '\0') {
        // If the current character is not a space, copy it
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            str[j] = str[i];
            j++; // Move the write pointer forward
        }
        i++; // Always move the read pointer forward
    }
    
    // Null-terminate the string at its new, shorter length
    str[j] = '\0';
}

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    removeSpaces(sentence);

    printf("Sentence after removing spaces: %s\n", sentence);

    return 0;
}