/* Write a program to display zodiac symbol & given zodiac sign from given birth day and month as per following criteria.
https://in.pinterest.com/pin/81698180718875314/
*/
#include<stdio.h>
void main ()
{
    int month,day;
    printf("enter value month");
    scanf("%d",&month);
    printf("enter value day");
    scanf("%d",&day);

    printf("\nmonth is %d and date is %d\n\n",month,day);
   // 21 to 30/3 == 1 to 19/04
    if(month==3 && day>=21 && day<31)
    {
        printf("zodiac sign : arise\nsymbol : the ram\n ");
    }
    else if(month == 4 && day>=1 && day<20)
    {
        printf("zodiac sign : arise\nsymbol : the ram\n");
    }
    // april 20-may 20
    else if(month == 4 && day>=20 && day<31)
    {
        printf("zodiac sign : taurus\nsymbol : the bull\n");
    }
   
    else if (month == 5 && day>=1 && day<21)
    {
        printf("zodiac sign :taurus\nsymbol :the bull\n ");
    }
     // may 21 to jun 20
    else if (month == 5 && day>=21 && day<=31)
    {
        printf("zodiac sign : gemini\nsymbol : the twins");
    }
    else if(month == 6 && day>=1 && day<21)
    {
        printf("zodiac sign : gemini\nsymbol : the twins\n");
    }
    // jun 21 to july 22
    else if(month == 6 && day>=21 && day<=31)
    {
        printf("zodiac sign : cancer\nsymbol : the crab\n");
    }
    else if(month == 7 && day>=1 && day<=22)
    {
        printf("zodiac sign : cancer\nsymbol : the crab\n");
    }
    //july 23 to augest 22
    else if(month == 7 && day>=23 && day<=31)
    {
        printf("zodiac sign : leo\nsymbol : the lion\n");
    }
    else if(month == 8 && day>=1 && day>=22 )
    {
        printf("zodiac sign : leo\nsymbol : the lion\n");
    }
    //augest 23 to sep 22
    else if(month == 8 && day>=23 && day<=31)
    {
        printf("zodiac sign : virgo\nsymbol : the virgin\n");
    }
    else if(month == 9 && day>=1 && day<=22)
    {
        printf("zodiac sign : virgo\nsymbol : the virgin\n");
    }
    //sep 23 to oct 22
    else if(month == 9 && day>=23 && day<=30)
    {
        printf("zodiac sign : libra\nsymbol : the scales\n");
    }
    else if (month == 10 && day>=1 && day<=22)
    {
        printf("zodiac sign : libra\nsymbol : the scales\n");
    }
    // oct 23 to nov 21
    else if(month == 10 && day>=23 && day<=31)
    {
        printf("zodiac sign : scorpio\nsymol : the scorpion\n");
    }
    else if (month == 11 && day>=1 && day<=21)
    {
        printf("zodiac sign : scorpio\nsymbol : the scorpion\n");
    }
    // nov 22 to dec 21
    else if(month == 11 && day>=22 && day<=30)
    {
        printf("zodiac sign : sagittarius\nsymbol : the archer\n");
    }
    else if(month == 12 && day>=1 && day<=21)
    {
        printf("zodiac sign : sagittarius\nsymbol : the archer\n");
    }
    //dec 22 to jan 19
    else if (month == 12 && day>=22 && day<=31)
    {
        printf("zodiac sign : capricom\nsymbol : the goat");
    }
    else if(month == 1 && day>=1 && day<=19)
    {
         printf("zodiac sign : capricom\nsymbol : the goat");
    }
    // jan 20 to feb 18
    else if(month == 1 && day>=20 && day<=31 )
    {

        printf("zodiac sign : aquarius\nsymbol : the water bearer\n");
    }
    else if(month == 2 && day>=1 && day<=18)
    {
        printf("zodiac sign : aquarius\nsymbol : the water bearer\n");
    }
    //feb 19to march 20
    else if(month == 2 && day>=19 && day<=28/29)
    {
        printf("zodiac sign : pisces\nsymbol :the fishes\n");
    }
    else if(month == 3 && day>=1 && day<=20)
    {
         printf("zodiac sign : pisces\nsymbol :the fishes\n");
    }
    else 
    {
        printf("nothing");
    }

    
}