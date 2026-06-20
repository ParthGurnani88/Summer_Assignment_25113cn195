#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // 1. Input the string from the user
    printf("Enter a string: ");
    // Using %[^\n] allows the program to read strings with spaces
    scanf("%[^\n]", str); 

    // 2. Count characters until the null terminator ('\0') is reached
    while (str[length] != '\0') {
        length++;
    }

    // 3. Print the result
    printf("The length of the string is: %d\n", length);

    return 0;
}