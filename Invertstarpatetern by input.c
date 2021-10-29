#include<stdio.h>
main()
{
    int r,n,i;
    printf("Enter number of rows");
    scanf("%d",&r);
    for(i=0;i<=r;i++)
    {
        for(n=r;n>=i;n--)
        {
            printf("*");
        }
        printf("\n");
    }
}
