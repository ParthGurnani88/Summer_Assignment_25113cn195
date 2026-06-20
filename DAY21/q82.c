#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    char temp;

    // 1. Input the string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // 2. Find the length of the string first
    while (str[length] != '\0') {
        length++;
    }

    // 3. Reverse the string using two pointers
    int left = 0;
    int right = length - 1;

    while (left < right) {
        // Swap characters at left and right positions
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        // Move the pointers toward the middle
        left++;
        right--;
    }

    // 4. Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}