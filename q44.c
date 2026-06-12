#include<stdio.h>
int getfact()
{
    int n,i,fact=1;
    printf("enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }  
    return fact;
}
int main()
{
    int result;
    result = getfact();
    printf("factorial of a number is %d",result);
    return 0;
}