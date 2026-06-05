#include <stdio.h>

int main() 
{
    int original,n, rev = 0, dig;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        dig = n % 10;
        rev = rev * 10 + dig;
        n = n / 10;
        
    }

    if (rev == original)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
    return 0;
}