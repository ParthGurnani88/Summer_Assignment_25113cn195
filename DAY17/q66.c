#include<stdio.h>
int main()
{
    int a1[]={1,2,3,4,5};
    int a2[]={6,7,8,9,10};
    int a3[10];
    int i,j;
    for(i=0;i<5;i++)
    {
        a3[i]=a1[i];
    }
    for(j=0;j<5;j++)
    {
        a3[i+j]=a2[j];
    }
    printf("Union of arrays: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",a3[i]);
    }
    return 0;
}
