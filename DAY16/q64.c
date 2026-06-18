#include <stdio.h>

int main() {
    int arr[100], n, i, j, k;

    // 1. Take User Input
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 2. Remove Duplicates
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            // If a duplicate is found
            if (arr[i] == arr[j]) {
                // Shift all subsequent elements to the left by 1 position
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                // Reduce the size of the array since an item was removed
                n--;
                // Decrement j so we don't skip checking the new element shifted into index j
                j--;
            }
        }
    }

    // 3. Print the Result
    printf("\nArray after removing duplicates: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}