#include<stdio.h>
void main()
{
    int a,i,n,c,v;
    printf("Enter number of boomerang you want");
    scanf("%d",&v);
    for(a=1;a<=v;a++)
    {
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
    for(i=10;i>=0;i--)
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

}
     getch();
}
