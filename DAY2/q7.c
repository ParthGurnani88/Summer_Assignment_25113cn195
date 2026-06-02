#include <stdio.h>

int main() {
    int n,p=1,r;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        p=p*r;
        n=n/10;
    }
    printf("product of digits is %d",p);
    return 0;
}