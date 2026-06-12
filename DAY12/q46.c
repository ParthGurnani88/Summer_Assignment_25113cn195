#include<stdio.h>
#include<math.h>
int checkarmstrong()
{
    int n,original,rem,sum=0;
    printf("enter a number ");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+ rem*rem*rem;
        n=n/10;
    }
    if(original==sum)
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
    result = checkarmstrong();
    if(result==1)
    {
        printf("number is armstrong");
    }
    else
    {
        printf("number is not armstrong");
    }
    return 0;
}