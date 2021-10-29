#include<stdio.h>
void main()
{
    int i,c,x;
    for(i=1;i<=10;i++)
    {
        for(x=1;x<=i;x++)
        {
            printf(" ");
        }
        c=20;
        while(c!=(2*i-1))
        {
            printf("*");
            c--;
        }
        printf("\n");
    }
    getch();
}
