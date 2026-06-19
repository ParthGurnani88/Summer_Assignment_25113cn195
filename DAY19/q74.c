#include<stdio.h>
int main()
{
    int arr1[100][100],arr2[100][100],n,i,j,arr3[100][100],k=0;
    printf("Enter the number of elements in first matrix: ");
    scanf("%d",&n);
    printf("Enter the elements of first matrix: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the number of elements in second matrix: ");
    scanf("%d",&n);
    printf("Enter the elements of second matrix: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    
    // Logic for subtraction (Your logic here was perfect!)
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    
    printf("\nThe difference of the two matrices is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            // Added a tab '\t' instead of space ' ' so columns line up beautifully
            printf("%d\t", arr3[i][j]); 
        }
        printf("\n");
    }
    
    return 0;
}