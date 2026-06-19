#include <stdio.h>

void bubbleSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int swapped = 0; 
        
        for (int j = 0; j < size - i - 1; j++) {
            // CRITICAL CHANGE: Use '<' to swap if the next element is larger
            if (arr[j] < arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                swapped = 1; 
            }
        }
        
        // If no elements were swapped, the array is already sorted
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int data[] = {12, 64, 11, 25, 22};
    int size = sizeof(data) / sizeof(data[0]);
    
    printf("Original array:   ");
    for (int i = 0; i < size; i++) printf("%d ", data[i]);
    printf("\n");
    
    bubbleSortDescending(data, size);
    
    printf("Descending array: ");
    for (int i = 0; i < size; i++) printf("%d ", data[i]);
    printf("\n");
    
    return 0;
}