#include <stdio.h>

void findDuplicates(int arr[], int n) {
    int foundDuplicate = 0;

    printf("Duplicate elements in the array are: \n");
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                foundDuplicate = 1;
                break; 
            }
        }
    }

    if (!foundDuplicate) {
        printf("No duplicate elements found.\n");
    }
}

int main() {
    int arr[] = {2, 5, 3, 2, 8, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);

    return 0;
}