#include<stdio.h>
int checkprime()
{
    int n,i,flag=0;
    printf("enter a number ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
int main()
{
    int result;
    result = checkprime();
    if(result==0)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
    return 0;
}