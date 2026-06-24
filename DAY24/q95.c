#include <stdio.h>
#include <string.h>

int main() {
    char sentence[] = "Coding in C programming language is absolutely fascinating.";
    char currentWord[100];
    char longestWord[100] = "";
    int maxLen = 0;
    
    char *ptr = sentence;
    int bytesRead;

    // sscanf reads a word, and %n tells us how many characters it skipped/read
    while (sscanf(ptr, "%99[a-zA-Z0-9]%n", currentWord, &bytesRead) == 1) {
        int currentLen = strlen(currentWord);
        
        // If this word is longer than our current max, update it
        if (currentLen > maxLen) {
            maxLen = currentLen;
            strcpy(longestWord, currentWord);
        }
        
        // Move the pointer forward past the word we just read
        ptr += bytesRead;
        
        // Move past any spaces or punctuation to find the next word
        while (*ptr && !((*ptr >= 'a' && *ptr <= 'z') || 
                         (*ptr >= 'A' && *ptr <= 'Z') || 
                         (*ptr >= '0' && *ptr <= '9'))) {
            ptr++;
        }
    }

    printf("Longest word: %s\n", longestWord);
    return 0;
}