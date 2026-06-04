#include<stdio.h>

#include<math.h>
int main()
{
    int n,r,sum=0,n1,a=0;
    printf("enter a number");
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
    {
        n1=n1/10;
        ++a;

    }
    n1=n;
    while(n1!=0)
    {
        r=n1%10;
        sum=sum+pow(r,a);
        n1=n1/10;
    }
    if (sum==n)
    printf("%d is  an armstrong nmuber",n);
    else
    printf("%d is not an armstrong number",n);
    
    return 0;
}