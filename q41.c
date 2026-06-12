#include<stdio.h>
int getsum(i)
{
    int a,b;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    int total = a + b;
    return total;
}
int main ()
{
    int result;
    result = getsum();
    printf("sum of two numbers is %d",result);
    return 0;
}
