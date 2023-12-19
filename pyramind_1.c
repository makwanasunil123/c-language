/*
step 1: *

step 2: *****

step 3:

   *****
   *****
   *****
   *****
   *****

   step 4:

       *
       **
       ***
       ****
       *****


*/

#include<stdio.h>
void main ()
{
    int i,j;
    i=1;
    while(i<=5)
    {
     j=1;
    while(j<=i)
    {
        printf("*");
        j++;
    }
    printf("\n");
    i++;
    }
    
}
/*
    int j;
  
    j=1;
    while(j<=5)
    {
        printf("*");
        j++;
    }
    printf("\n");
    j = 1;
    while(j<=5)
    {
        printf("*");
        j++;
    }
    printf("\n");
    j=1;
    while(j<=5)
    {
        printf("*");;
        j++;
    }
    printf("\n");
    j=1;
    while(j<=5);
    {
        printf("*");
    }
    printf("\n");
    j=1;
    while(j<=5)
    {
        printf("*");
    }



*/
//}
