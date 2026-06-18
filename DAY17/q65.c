#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6, 7};
    
    // Calculate the size (number of elements) of both arrays
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int sizeMerged = size1 + size2;
    
    // Create the destination array
    int merged[sizeMerged];
    
    // 1. Copy elements from the first array
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    
    // 2. Copy elements from the second array
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i]; // Offset by size1
    }
    
    // Print the merged array
    printf("Merged Array: ");
    for (int i = 0; i < sizeMerged; i++) {
        printf("%d ", merged[i]);
    }
    
    return 0;
}