#include <stdio.h>
#include <string.h>

void sort_by_length(char words[][50], int n) {
    char temp[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
}

int main() {
    char words[5][50] = {
        "elephant",
        "cat",
        "banana",
        "dog",
        "it"
    };
    int n = 5;

    sort_by_length(words, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}