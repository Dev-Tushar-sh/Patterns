#include<stdio.h>
void main()
{
    int i,n,c;
    for(i=0;i<=10;i++)
    {
        for(n=0;n<=i;n++)
        {
            printf(" ");
        }
            for(c=0;c<=i;c++)
            {
                printf("*");
            }

        printf("\n");
    }
    getch();
}

