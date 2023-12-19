//check year is lipyear or not
#include<stdio.h>
void main ()
{
    int year,lipyear;
    printf("enter year");
    scanf("%d",&year);

    printf("entered year is :%d",year);

    lipyear = year % 4;

    if(lipyear==0)
    {
        printf("year is a lipyear");
    }
    else
    {
        printf("year is a not lipyear");
    }
}