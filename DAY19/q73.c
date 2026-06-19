#include<stdio.h>

int main()
{
    // Keeping your 100x100 upper bounds
    int arr1[100][100], arr2[100][100], arr3[100][100];
    int n, i, j;
    
    // Fix 1: Clarified that 'n' is the row/column dimension
    printf("Enter the size of the square matrices (e.g., 3 for a 3x3 matrix): ");
    scanf("%d", &n);
    
    printf("Enter the elements of first matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    
    // Fix 2: Removed the second scanf for 'n' to ensure sizes stay equal
    printf("Enter the elements of second matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    
    // Logic for addition (Your logic here was perfect!)
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    printf("\nThe sum of the two matrices is:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            // Added a tab '\t' instead of space ' ' so columns line up beautifully
            printf("%d\t", arr3[i][j]); 
        }
        printf("\n");
    }
    
    return 0;
}