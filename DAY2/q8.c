#include <stdio.h>

int main() {
    int n,num,rev=0,rem;
    printf("enter a number");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(num==rev)
    
        printf("palindrome number =%d",num);
     
        else
        
            printf("not a palindrome number=%d",num);
        
        return 0;
    }
