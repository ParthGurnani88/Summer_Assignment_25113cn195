#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void findPairWithSum(int arr[], int size, int target) {
    // 1. Sort the array first
    qsort(arr, size, sizeof(int), compare);
    
    // 2. Initialize pointers at both ends
    int left = 0;
    int right = size - 1;
    
    // 3. Move pointers toward each other
    while (left < right) {
        int current_sum = arr[left] + arr[right];
        
        if (current_sum == target) {
            printf("Pair found: %d + %d = %d\n", arr[left], arr[right], target);
            return;
        }
        else if (current_sum < target) {
            left++;  // We need a bigger sum, move rightward
        } 
        else {
            right--; // We need a smaller sum, move leftward
        }
    }
    
    printf("No pair with the given sum exists.\n");
}

int main() {
    int arr[] = {10, 15, 3, 7, 8, 2};
    int target = 17;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    findPairWithSum(arr, size, target);
    
    return 0;
}