#include<stdio.h>
int main()
{
    int a1[]={1,2,3,4,5};
    int a2[]={1,2,6,14,5};
    int intersection[5];
    int i,j,k=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a1[i]==a2[j])
            {
                intersection[k]=a1[i];
                k++;
            }
        }
    }   

    printf("Intersection of arrays: ");
    for(i=0;i<k;i++)
    {
        printf("%d ",intersection[i]);
    }   

    return 0;

}   