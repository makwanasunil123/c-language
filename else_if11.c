// write a program to findout smallest number outof given 3 numbers 
#include<stdio.h>
void main ()
{
    int number1 = 0 , number2 = 0 , number3 = 0;
    printf("enter value of number1");
    scanf("%d",&number1);
    printf("enter value of  number2");
    scanf("%d",&number2);
    printf("enter value of number3");
    scanf("%d",&number3);

    if(number1 == number2 && number2 == number3)
    {
        printf("all are same");
    }
    else if (number1 < number2 && number1 < number3)
    {
        printf("number1 is samallest");
    }
    else if (number2 < number1 && number2 < number3)
    {
        printf("number2 is samallest");
    }
    else if (number3 < number1 && number3 < number2)
    {
        printf("number3 is samallest");
    }
}