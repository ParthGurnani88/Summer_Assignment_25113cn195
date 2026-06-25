#include <stdio.h>
#include <string.h>

void find_common_characters(char str1[], char str2[]) {
    int count1[256] = {0};
    int count2[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++) {
        count1[(unsigned char)str1[i]]++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        count2[(unsigned char)str2[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (count1[i] > 0 && count2[i] > 0) {
            int min_count = (count1[i] < count2[i]) ? count1[i] : count2[i];
            for (int j = 0; j < min_count; j++) {
                printf("%c ", i);
            }
        }
    }
    printf("\n");
}

int main() {
    char str1[] = "apple";
    char str2[] = "peach";

    find_common_characters(str1, str2);

    return 0;
}