//write a program to print two digit number in words
//38
//three eight
#include<stdio.h>
void main ()
{
    int number;
    int fist = 0 , second = 0;
    printf("enter value of number");
    scanf("%d",&number);

    fist = number / 10;
    second = number%10;
    printf("The value of fist is %d and second is %d\n",fist,second);

    if(fist == 1)
    {
        printf("one ");
    }
    else if(fist == 2)
    {
        printf("two ");
    }
    else if (fist ==3 )
    {
        printf("three ");
    }
    else if (fist == 4)
    {
        printf("four ");
    }
    else if (fist == 5)
    {
        printf("five ");
    
    }
    else if (fist == 6)
    {
        printf("six");
    }
    else if (fist == 7)
    {
        printf("seven");
    }
    else if (fist == 8)
    {
        printf("eight");
    }  
    else if (fist == 9)
    {
        printf("nine");
    } 
     else if (fist ==10)
    {
            printf("ten");
     }
     else
     {
        printf("invalide number");
     }

        if(second == 1)
        {
            printf("one");
        }
        else if (second == 2)
        {
            printf("two");
        }
        else if (second == 3)
        {
            printf("three");
        }
        else if( second == 4)
        {
            printf("four");
        }
        else if ( second == 5)
        {
            printf("five");
        }
        else if (second == 6)
        {
            printf("six");
        }
        else if (second == 7)
        {
            printf("seven");
        }
        else if (second == 8)
        {
            printf("eight");
        }
        else if (second == 9)
        {
            printf("nine");

        }
        else if (second == 0)
        {
            printf("zero");
        }
}