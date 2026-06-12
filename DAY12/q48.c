#include<stdio.h>
int checkperfect()
{
    int n,i,sum=0;
    printf("enter a number ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        return 1;
    }
    else
    {
        return 0;
    
    }
}
int main()
{
    int result;
    result = checkperfect();
    if(result==1)
    {
        printf("number is perfect");
    }
    else
    {
        printf("number is not perfect");
    }
    return 0;
}