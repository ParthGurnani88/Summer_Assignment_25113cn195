#include <stdio.h>
#include <math.h>

// Function to check if a number is Armstrong
// Takes 'num' as parameter and returns 1 if Armstrong, 0 otherwise
int isArmstrong(int num)
{
    int n1, r, sum = 0, a = 0;
    
    // Step 1: Count the number of digits
    n1 = num;
    while(n1 != 0)
    {
        n1 = n1 / 10;
        ++a;
    }
    
    // Step 2: Calculate sum of digits raised to power 'a'
    n1 = num;
    while(n1 != 0)
    {
        r = n1 % 10;
        sum = sum + (int)pow(r, a);  // Cast to int to avoid floating point issues
        n1 = n1 / 10;
    }
    
    // Step 3: Return 1 if Armstrong, 0 otherwise
    if (sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int ur, lr, i;
    
    printf("Enter lower range: ");
    scanf("%d", &lr);
    printf("Enter upper range: ");
    scanf("%d", &ur);
    
    printf("Armstrong numbers between %d and %d are:\n", lr, ur);
    
    for(i = lr; i <= ur; i++)
    {
        if(isArmstrong(i))  // Function now checks 'i' and returns 1 or 0
        {
            printf("%d ", i);  // Added space after %d
        }
    }
    
    printf("\n");
    return 0;
}