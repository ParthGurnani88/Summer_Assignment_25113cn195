#include <stdio.h>
#include <string.h>

// Function to check if str2 is a rotation of str1
int isRotation(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths aren't equal, they can't be rotations
    if (len1 != len2) {
        return 0;
    }

    // Try treating every index 'i' in str1 as the potential starting point
    for (int i = 0; i < len1; i++) {
        int match = 1;
        
        // Check if str2 matches str1 starting from index 'i'
        for (int j = 0; j < len1; j++) {
            // (i + j) % len1 handles the wrap-around logic
            if (str1[(i + j) % len1] != str2[j]) {
                match = 0; // Mismatch found, break early
                break;
            }
        }
        
        // If a full match was found, they are rotations
        if (match) {
            return 1;
        }
    }

    return 0; // No match found after checking all positions
}

int main() {
    char str1[] = "ABCD";
    char str2[] = "CDAB";

    if (isRotation(str1, str2)) {
        printf("Yes, they are rotations.\n");
    } else {
        printf("No, they are NOT rotations.\n");
    }

    return 0;
}