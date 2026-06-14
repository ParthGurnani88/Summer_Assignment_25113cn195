#include<stdio.h>
int main()
{
    int arr[]={2,4,6,8,11,49};
    int i,target =34,flag=0;
    for(i=0;i<6;i++)
    {
        if(arr[i]==target)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Element found");
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}