#include <stdio.h>
#include <string.h>

void sort_names(char names[][50], int n) {
    char temp[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[5][50] = {
        "Zara",
        "Bob",
        "Charlie",
        "Alex",
        "David"
    };
    int n = 5;

    sort_names(names, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}