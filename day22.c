#include<stdio.h>
void main()
{
    int number1 , number2;
     number1 = 20;
     number2 = 30;

     printf("number 1 is %d \n", number1);
     printf("number 1 is %d \n",number2);

     number1 = number1 + number2;//50
     number2 = number1 - number2;//20
     number1 = number1 - number2;//30

     printf("after number 1 is %d \n" , number1);
     printf("after number 2 is %d \n" , number2);

}