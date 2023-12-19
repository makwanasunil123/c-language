//write a program to print days of month
#include<stdio.h>
void main ()
{
    int month;
    printf("enter month");
    scanf("%d",&month);

    printf("Given month is %d\n",month);

    if (month==1)
    {
        printf("days of month is",31);
    }

    else if(month==2)
    {
        printf("days of month is",28/29);
    }

    else if (month==3)
    {
          printf("days of month is",31);
    }

    else if (month==4)
    {
          printf("days of month is",30);
    }

    else if (month==5)
    {
          printf("days of month is",31);
    }

    else if(month==6)
        {
            printf("days of month is",30);
      }

    else if(month==7)
       {
          printf("days of month is",31);
       }

      else if(month==8)
      {
      printf("days of month is",31);
      }

      else if (month==9)
      {
      printf("days of month is",30);
      }

      else if(month==10)
      {
      printf("days of month is",31);
      }

      else if (month==11)
      {
      printf("days of month is",30);
      }

      else if (month==12)
      {
      printf("days of month is",31);
      }

      else
      {
    printf("invelide month");
      }


}