#include<stdio.h>
#include<limits.h>
int secondLargest(int arr[],int n)
{
    int i,largest=INT_MIN,second=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>second && arr[i]!=largest)
        {
            second=arr[i];
        }
    }
    return second;
}
int main()
{
    int arr[]={5,2,9,1,5,6};
    int n=6;
    int second=secondLargest(arr,n);
    if(second==INT_MIN)
    {
        printf("No second largest element found\n");
    }
    else
    {
        printf("Second largest element in array is %d\n",second);
    }
    return 0;
}