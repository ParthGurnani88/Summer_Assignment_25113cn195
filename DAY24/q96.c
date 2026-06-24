#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    // Array to keep track of seen characters (ASCII size 256)
    // Initialized to 0 (false)
    int seen[256] = {0}; 
    
    int readIndex = 0;
    int writeIndex = 0;

    while (str[readIndex] != '\0') {
        unsigned char ch = str[readIndex];

        // If we haven't seen this character yet
        if (seen[ch] == 0) {
            seen[ch] = 1;              // Mark it as seen
            str[writeIndex] = str[readIndex]; // Copy it to the write position
            writeIndex++;
        }
        readIndex++;
    }

    // Null-terminate the modified string
    str[writeIndex] = '\0';
}

int main() {
    char str[] = "programming";
    
    printf("Original:  %s\n", str);
    
    removeDuplicates(str);
    
    printf("Result:    %s\n", str);

    return 0;
}