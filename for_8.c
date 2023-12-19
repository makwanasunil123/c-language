
// *
// * *
// *  *
// *   * 
// *    *
// * * * *

#include<stdio.h>
void main()
{
    int i,j,k=1;
    for(j=1;j<=5;j++)
   {
     for(i=1;i<=k;i++)
     if(i==k || j==k || k==j)
    {
     printf("*");
    }
    else
    {
      printf(" ");
    }
    printf("\n");
    k--;
    }
   
    

}