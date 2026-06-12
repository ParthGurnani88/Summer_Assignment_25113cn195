#include<stdio.h>
int getfibonacci()
{
    int n,a=0,b=1,next,i;
    printf("enter the number of terms ");
    scanf("%d",&n);
    if(n==1)
    {
        return a;
    }
    else if(n==2)
    {
        return b;
    }
    else
    {
        for(i=3;i<=n;i++)
        {
            next=a+b;
            a=b;
            b=next;
        }
        return next;
    }
}
int main()
{
    int result;
    result = getfibonacci();
    printf("nth term of fibonacci series is %d",result);
    return 0;
}