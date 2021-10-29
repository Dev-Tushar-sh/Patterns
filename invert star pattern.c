#include<stdio.h>
void main()
{
    int i,n;
    for(i=0;i<=5;i++)
    {
        for(n=5;n>=i;n--)
        {
            printf("*");
        }
        printf("\n");
    }
}
