#include<stdio.h>
int factorial(int n)
    
    {
        int fact=1;
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        return fact;
}
int main()
{
    int n,num,r,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
num=n;
while(num>0)
{
    r=num%10;
    sum=sum+factorial(r);
    num=num/10;
}
if(sum==n){



    printf("%d is a Strong number",n);
}
else
{
    printf("%d is Not a Strong number",n);
}
return 0;
}