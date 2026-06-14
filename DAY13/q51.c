#include<stdio.h>
int main()
{
    int n,temp;
    printf("enter number of elements in array ");
    scanf("%d",&n); 
    int arr[n],i;
    printf("enter %d elements ",n);
    for(i=0;i<n;i++)    {
        scanf("%d",&arr[i]);
    }
        int max=arr[0];
        int min=arr[0];
        for(i=1;i<n;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        
        
        printf("largest element in array is %d \n",max);
        printf("smallest element in array is %d \n ",min);
        return 0;
    
    }


