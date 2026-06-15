#include <stdio.h>

int main() {
    int n, k, i;
    
    printf("Enter the size of array: "); 
    scanf("%d", &n);
    
    int arr[n]; 
    printf("Enter the elements of array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k); 
    
    // Step 1: Normalize k
    k = k % n; 
    
    // Step 2: Store the first k elements into a temporary array
    int temp[k];
    for(i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    
    // Step 3: Shift the remaining (n - k) elements to the left
    // This loop safely shifts elements forward by k positions
    for(i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }
    
    // Step 4: Copy the elements from temp back to the end of arr
    for(i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
    
    // Step 5: Print the rotated array so you can see the result!
    printf("Rotated array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;   
}