#include<stdio.h>
#include<conio.h>
void main()
{

    int i,n,m,p=1;
     printf("Enter the Number of line");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(n=1;n<=i;n++)
        {
            printf("%d ",p);
            p++;
        }
        printf("\n");
    }
    getch();
}
