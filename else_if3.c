#include<stdio.h>
void main ()
{
    int number = 0;
    int answer = 0;
    printf("enter  number : ");
    scanf("%d",&number);

    answer = number % 2;

    if (number==0)
    {
        printf("it is zero");
    }

    else if (answer == 0)
    {
    printf("it is even number");
    }

    else
    {
        printf("it is odd number ");
    }

}