#include<stdio.h>
int getmax()
{
    int a,b;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    int max = (a > b) ? a : b;
    return max;
}
int main()
{
    int result;
    result = getmax();
    printf("maximum of two numbers is %d",result);  
    return 0;
}