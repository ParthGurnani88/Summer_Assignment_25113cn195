#include <stdio.h>

void findCommonElements(int arr1[], int size1, int arr2[], int size2) {
    printf("Common elements: ");
    int found = 0;

    // Loop through the first array
    for (int i = 0; i < size1; i++) {
        // Check if the current element exists in the second array
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                found = 1;
                break; // Found a match, move to the next element in arr1
            }
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\n");
}

int main() {
    // Same example sets from before!
    int arrayA[] = {1, 2, 3, 4, 5};
    int arrayB[] = {4, 5, 6, 7, 8};

    int sizeA = sizeof(arrayA) / sizeof(arrayA[0]);
    int sizeB = sizeof(arrayB) / sizeof(arrayB[0]);

    findCommonElements(arrayA, sizeA, arrayB, sizeB);

    return 0;
}