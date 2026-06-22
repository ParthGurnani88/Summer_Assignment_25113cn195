#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Characters don't match
        }
        left++;
        right--;
    }
    return true; // All characters matched
}

int main() {
    char str1[] = "racecar";
    char str2[] = "hello";

    printf("'%s' is %s\n", str1, isPalindrome(str1) ? "a palindrome" : "not a palindrome");
    printf("'%s' is %s\n", str2, isPalindrome(str2) ? "a palindrome" : "not a palindrome");

    return 0;
}