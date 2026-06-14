#include <stdio.h>

int main() {
    int n;

    // 1. Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare the array of size n
    int arr[n];

    // 2. Input array elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 3. Display the array elements
    printf("\nThe array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}