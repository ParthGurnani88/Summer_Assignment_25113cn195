#include <stdio.h>

// Function for binary search. 
// It returns the index of the element if found, otherwise returns -1.
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        // Calculate the middle index safely to prevent integer overflow
        int mid = low + (high - low) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; 
        }

        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            low = mid + 1;
        } 
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Element was not present in the array
    return -1;
}

int main() {
    // Array MUST be sorted
    int data[] = {11, 12, 22, 25, 64};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 22;

    int result = binarySearch(data, size, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}