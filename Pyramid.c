#include<stdio.h>
void main()
{
    int z,x,c=0,n=1;
    for(z=1;z<=5;z++)
    {
        c=0;
        for(x=5;x>z;x--)
        {
            printf(" ");
        }
        while(c!=(2*z-1))
        {
            printf("%d",n);
            c++;

        }
        printf("\n");
    }
}
