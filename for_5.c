#include<stdio.h>
void main()
{
    int i,j;

  for(j=1; j<=5; j++)    
{
        for(i=1; i<=j;i++) 
   {
    if(j==5 || i==1 || i==j)
    {
        printf("* ");
    }
    else
    {
        printf(" ");
    }
   }
    printf("\n");
}
}
