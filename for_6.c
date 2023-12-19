#include<stdio.h>
void main()
{
    int number, row , col;
    col=5;
    printf("enter number");
    scanf("%d",&number);


    for(row=1; row<=5; row++)
    {
        for(number=1;number<=row;number++)
   {
     printf("%d,",number);
   }
    printf("\n");
    col++;
    }
}