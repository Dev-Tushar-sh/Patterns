#include<stdio.h>
void main()
{
    int x,c,i,n;
    printf("Enter the Number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(x=0;x<i;x++)
        {
           printf(" ");
        }
        c=n*2;
        while(c!=(2*i-1) )
        {
            printf("*");
            c--;
        }
        printf("\n");
    }
    getch();
}
