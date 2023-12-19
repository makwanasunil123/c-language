//write a pogram to print days of month
#include<stdio.h>
void main ()
{
    int month,year;
    printf("enter month");
    scanf("%d",&month);
    printf("enter year");
    scanf("%d",&year);

    printf("given year is :%d",month);

    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("days of month is 31 \n");
    } 
    else if(month==4 || month==6 || month==9 || month==11)
    {
        printf("days of month is 30\n");
    
    }

    else if(month==2)
    {
        printf("days of month is 28/29 \n");

    }

    else 
    {
        printf("invelide month");
    }
}