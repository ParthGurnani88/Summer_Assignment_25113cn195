#include <stdio.h>

void selectionSort(int arr[], int size) {
    // One by one move the boundary of the unsorted subarray
    for (int i = 0; i < size - 1; i++) {
        // Find the minimum element in the unsorted array
        int min_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; // Update index of the minimum element
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        if (min_idx != i) {
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }
}

int main() {
    int data[] = {64, 25, 12, 22, 11};
    int size = sizeof(data) / sizeof(data[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) printf("%d ", data[i]);
    printf("\n");

    selectionSort(data, size);

    printf("Sorted array:   ");
    for (int i = 0; i < size; i++) printf("%d ", data[i]);
    printf("\n");

    return 0;
}