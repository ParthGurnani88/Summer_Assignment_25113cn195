#include <stdio.h>

int main() 
{
    int n, prod = 1, dig;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        dig = n % 10;
        prod = prod * dig;
        n = n / 10;
        
    }

    printf("Product of digits = %d", prod);

    return 0;
}
