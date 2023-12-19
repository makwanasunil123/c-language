#include<stdio.h>
void main()
{
  int i,j,k;
  k=5;
  

    for(j=1; j<=5; j++)
    {
        for(i=1; i<=k; i++)
    {
        if(j==1 || i==1 || k==i)
        {
            printf("* ");
        }
        else
        {
            printf(" ");
        }
    }
    
    printf("\n");
    k--;
    }
}
