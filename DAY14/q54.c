#include<stdio.h>
int frequency(int arr[],int n,int target)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[]={2,3,8,9,81,81};
    int n=6,target=81;
    int freq=frequency(arr,n,target);
    printf("Frequency of %d in array is %d\n",target,freq);
    return 0;
}