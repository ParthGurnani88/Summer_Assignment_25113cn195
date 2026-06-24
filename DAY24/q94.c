#include <stdio.h>
#include <string.h>

void compressString(const char *src, char *dst) {
    int len = strlen(src);
    int j = 0; // Index for destination string

    for (int i = 0; i < len; i++) {
        // Copy the current character
        dst[j++] = src[i];

        // Count occurrences of the current character
        int count = 1;
        while (i + 1 < len && src[i] == src[i + 1]) {
            count++;
            i++;
        }

        // Convert count to string and append it to dst
        // (Using sprintf to handle counts greater than 9 safely)
        j += sprintf(&dst[j], "%d", count);
    }
    
    dst[j] = '\0'; // Null-terminate the compressed string

    // If compressed string is not shorter than original, keep original
    if (strlen(dst) >= len) {
        strcpy(dst, src);
    }
}

int main() {
    char src[] = "AAABBBBCDDDD";
    // Allocate enough memory for the destination string
    char dst[2 * sizeof(src)]; 

    printf("Original:   %s\n", src);
    
    compressString(src, dst);
    
    printf("Compressed: %s\n", dst);

    return 0;
}