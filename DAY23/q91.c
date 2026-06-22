#include <stdio.h>
#include <string.h>

char findFirstRepeating(char str[]) {
    // Array to keep track of visited characters (initialized to 0/false)
    int visited[256] = {0};

    // Traverse the string from left to right
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];

        // If the character has been seen before, it's the first repeating one
        if (visited[ch] == 1) {
            return ch;
        }

        // Mark the character as visited
        visited[ch] = 1;
    }

    return '\0'; // Return null character if no character repeats
}

int main() {
    char str[200];

    printf("Enter a string: ");
    // Read string and strip the trailing newline character
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    char result = findFirstRepeating(str);

    if (result != '\0') {
        if (result == ' ') {
            printf("The first repeating character is: [Space]\n");
        } else {
            printf("The first repeating character is: '%c'\n", result);
        }
    } else {
        printf("No repeating characters found.\n");
    }

    return 0;
}