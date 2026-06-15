#include<stdio.h>
int main()
{
    int n , i ;
    printf("enter the size of array ");
    scanf("%d",&n); 
    int arr[n];
    printf("enter the elements of array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int left=0 , right=n-1 , temp ;
    while(left<right)
    {
        while(left<right && arr[left]==0)
        {
            left++;
        }
        while(left<right && arr[right]>=1)
        {
            right --;
        }
        if(left<right)
        {
        arr[left]= arr[right];
        arr[right]= 0;
            left++;
            right--;
        }
    }
    printf("array after swapping zeros to the end is ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}