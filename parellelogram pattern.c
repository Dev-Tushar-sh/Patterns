#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,m,x,z;
    for(i=1;i<=25;i++)
    {
        for(n=25;n>=i;n--)
        {
            printf(" ");

        }
        for(m=1;m<=i;m++)
        {
           printf("*");
        }
        printf("\n");
    }

    for(i=1;i<=25;i++)
    {
           printf(" ");
        for(x=25;x>=i;x--)
        {
            printf("*");
        }
        for(z=1;z<i;z++)
        {
            printf(" ");
        }
        printf("\n");
    }
    getch();
}
