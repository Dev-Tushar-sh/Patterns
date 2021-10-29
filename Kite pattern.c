#include<conio.h>
#include<stdio.h>
main()
{
    int i,m,n=0;
    for(i=1;i<=10;i++)
    {
        n=1;
        for(m=10;m>=i;m--)
        {
           printf(" ");
        }
        while(n!=(2*i-1))
        {
            printf("*");
            n++;
        }
        printf("\n");
    }
 getch();
}
