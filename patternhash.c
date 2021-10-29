#include<stdio.h>
#include<conio.h>
void main()
{
    int p=1;
  printf("value of rows is 5\n");
  for(int j=1;j<=5;j++)
  {
      for(int i=1;i<=j;i++)
       {
         printf("%d ",p);
         p=p+p;

       }
      printf("\n");
  }
}
