#include<stdio.h>
int checkpalindrome()
{
    int n,rev=0,rem,original;
    printf("enter a number ");  
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(original==rev)
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
    result = checkpalindrome();
    if(result==1)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number is not palindrome");
    }
    return 0;
}