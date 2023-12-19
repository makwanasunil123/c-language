#include<stdio.h>
void main()
{
    int number, row,col ;
    printf("enter number :");
    scanf("%d",&number);
    
  
   for(col=1; col<=number; col++)
   {

     for(row=1; row<=col; row++)
    {
          printf("*");
    }
    printf("\n");

   }
}