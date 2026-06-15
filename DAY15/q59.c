#include<stdio.h>
int main()
{
    int i, k , n  ;
    printf("enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number of positions to rotate ");
    scanf("%d",&k); 
    k = k % n;
    int temp[k];
    for(i=0;i<k;i++)
    {
        temp[i]=arr[n-k+i];

    }
    for(i=n-1;i>=k;i--)
    {
        arr[i]=arr[i-k];
    }
    for(i=0;i<k;i++)
    {
        arr[i]=temp[i];
    }
    printf("rotated array is ");
    for(i=0;i<n;i++)    {
        printf("%d ",arr[i]);
    }   
    printf("\n");
    return 0;
}