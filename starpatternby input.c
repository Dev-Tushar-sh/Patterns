#include<stdio.h>
void main()
{
    int i,n,r;
    printf("Enter number of rows");
    scanf("%d",&r);
    for(i=0;i<=r;i++)
    {
        for(n=0;n<=i;n++)
        {
            printf("*");
        }
        printf("\n");
    }
}
