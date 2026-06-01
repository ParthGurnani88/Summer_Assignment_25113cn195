#include<stdio.h>
int main(){
    int n,i, sum=0;

    printf("Enter the number of digits");
    scanf("%d", &n);

    for(i=0; i<=n; i++){
        sum= sum+i;
    }
    
    printf("the sum is %d", sum);
    return 0;
}