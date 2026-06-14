#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int i,even=0,odd=0;
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("number of even elements in array is %d\n",even);
    printf("number of odd elements in array is %d\n",odd);
    return 0;
}
