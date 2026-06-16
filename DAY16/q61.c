#include<stdio.h>
int main()
{
    int arr[100],i,n,missingterm,sum=0,total;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    total=(n*(n+1))/2;
    missingterm=total-sum;
    printf("The missing term is: %d",missingterm);
    return 0;
}