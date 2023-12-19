//write a program to findout incom tax based on given condiyion take monthly income as input
//yearly income    tax rate

//<3,00,000         5%
//>=3,00,000

//<5,00,000         10%
//>=5,00,000

//<8,00,000         20%

//>8,00,000         30% 
#include<stdio.h>
void main ()
{
    int monthly_incom = 0;
    int yearly_incom = 0;
    int tax_rat = 0;
    int income_tax =0;
    printf("enter value of monthly income");
    scanf("%d",&monthly_incom);

    yearly_incom = monthly_incom * 12;
    printf("\nThe value of yearly_com is %d",yearly_incom);

    if (yearly_incom < 300000)
    {
        tax_rat =5;
    
    }
    else if (yearly_incom >= 300000 && yearly_incom < 500000 )
    {
       tax_rat = 10;    
    }
    else if (yearly_incom >= 500000 && yearly_incom <800000)
    {
         tax_rat = 20;   
    }
    else if (yearly_incom >= 800000)
    {
        tax_rat = 30;
    }

    income_tax = yearly_incom * tax_rat /100;
    printf("\nThe value of income_tax is %d",income_tax);
    
}