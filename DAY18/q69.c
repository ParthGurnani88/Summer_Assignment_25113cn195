#include <stdio.h>

void bubbleSort(int arr[], int size) {
    // Outer loop for the number of passes
    for (int i = 0; i < size - 1; i++) {
        // Track if any swap happened in this pass (Optimization)
        int swapped = 0; 
        
        // Inner loop for adjacent comparisons
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                swapped = 1; // A swap occurred
            }
        }
        
        // If no two elements were swapped in the inner loop, the array is sorted
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int data[] = {5, 1, 4, 2, 8};
    int size = sizeof(data) / sizeof(data[0]);
    
    printf("Original array: ");
    for (int i = 0; i < size; i++) printf("%d ", data[i]);
    printf("\n");
    
    bubbleSort(data, size);
    
    printf("Sorted array:   ");
    for (int i = 0; i < size; i++) printf("%d ", data[i]);
    printf("\n");
    
    return 0;
}