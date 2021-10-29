#include<conio.h>
#include<stdio.h>
main()
{
    int i,m,n,c;
    printf("Enter the number of Rows");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        c=0;
        for(n=m;n>=i;n--)
        {
            printf(" ");
        }

        while(c!=(2*i-1))
        {

            printf("%d",n);
            c++;
        }
        printf("\n");
    }
    getch();
}
