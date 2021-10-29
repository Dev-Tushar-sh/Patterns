#include<stdio.h>
main()
{
    int rows,i,c,x;
    printf("Enter number of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        c=0;
        for(x=rows;x>=i;x--)
        {
            printf(" ");
        }
        while(c!=(2*i-1))
        {
            printf("*");
            c++;
        }
        printf("\n");
    }
}
