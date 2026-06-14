#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int i,sum=0,avg=10;
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/5;
    printf("Sum of array elements: %d \n", sum);
    printf("Average of array elements: %d \n", avg);
    return 0;  

}