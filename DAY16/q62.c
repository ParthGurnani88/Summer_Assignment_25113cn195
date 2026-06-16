#include<stdio.h>
int main()
{
    int arr[100],i,n,j,freq=0;
    int max_freq=0;
    int mmax_element=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        freq=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                freq++;
                arr[j]=0;
            }
        }
        if(freq>max_freq)
        {
            max_freq=freq;
            mmax_element=arr[i];
        }
        if(n>0)
        {
            printf("The most frequent element is: %d\n",mmax_element);
            printf("The frequency of the most frequent element is: %d\n",max_freq); 
        }
    }
    return 0;
}