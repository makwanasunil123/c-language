/* Write a program to display zodiac symbol & given zodiac sign from given birth day and month as per following criteria.
https://in.pinterest.com/pin/81698180718875314/
*/
#include <stdio.h>
void zodiacsign(int month, int date)
{


    printf("\nmonth is %d and date is %d\n\n", month, date);
    // 21 to 30/3 == 1 to 19/04
    if (month == 3 && date >= 21 && date < 31)
    {
        printf("zodiac sign : arise\nsymbol : the ram\n ");
    }
    else if (month == 4 && date >= 1 && date < 20)
    {
        printf("zodiac sign : arise\nsymbol : the ram\n");
    }
    // april 20-may 20
    else if (month == 4 && date >= 20 && date < 31)
    {
        printf("zodiac sign : taurus\nsymbol : the bull\n");
    }

    else if (month == 5 && date >= 1 && date < 21)
    {
        printf("zodiac sign :taurus\nsymbol :the bull\n ");
    }
    // may 21 to jun 20
    else if (month == 5 && date >= 21 && date <= 31)
    {
        printf("zodiac sign : gemini\nsymbol : the twins");
    }
    else if (month == 6 && date >= 1 && date < 21)
    {
        printf("zodiac sign : gemini\nsymbol : the twins\n");
    }
    // jun 21 to july 22
    else if (month == 6 && date >= 21 && date <= 31)
    {
        printf("zodiac sign : cancer\nsymbol : the crab\n");
    }
    else if (month == 7 && date >= 1 && date <= 22)
    {
        printf("zodiac sign : cancer\nsymbol : the crab\n");
    }
    // july 23 to augest 22
    else if (month == 7 && date >= 23 && date <= 31)
    {
        printf("zodiac sign : leo\nsymbol : the lion\n");
    }
    else if (month == 8 && date >= 1 && date >= 22)
    {
        printf("zodiac sign : leo\nsymbol : the lion\n");
    }
    // augest 23 to sep 22
    else if (month == 8 && date >= 23 && date <= 31)
    {
        printf("zodiac sign : virgo\nsymbol : the virgin\n");
    }
    else if (month == 9 && date >= 1 && date <= 22)
    {
        printf("zodiac sign : virgo\nsymbol : the virgin\n");
    }
    // sep 23 to oct 22
    else if (month == 9 && date >= 23 && date <= 30)
    {
        printf("zodiac sign : libra\nsymbol : the scales\n");
    }
    else if (month == 10 && date >= 1 && date <= 22)
    {
        printf("zodiac sign : libra\nsymbol : the scales\n");
    }
    // oct 23 to nov 21
    else if (month == 10 && date >= 23 && date <= 31)
    {
        printf("zodiac sign : scorpio\nsymol : the scorpion\n");
    }
    else if (month == 11 && date >= 1 && date <= 21)
    {
        printf("zodiac sign : scorpio\nsymbol : the scorpion\n");
    }
    // nov 22 to dec 21
    else if (month == 11 && date >= 22 && date <= 30)
    {
        printf("zodiac sign : sagittarius\nsymbol : the archer\n");
    }
    else if (month == 12 && date >= 1 && date <= 21)
    {
        printf("zodiac sign : sagittarius\nsymbol : the archer\n");
    }
    // dec 22 to jan 19
    else if (month == 12 && date >= 22 && date <= 31)
    {
        printf("zodiac sign : capricom\nsymbol : the goat");
    }
    else if (month == 1 && date >= 1 && date <= 19)
    {
        printf("zodiac sign : capricom\nsymbol : the goat");
    }
    // jan 20 to feb 18
    else if (month == 1 && date >= 20 && date <= 31)
    {

        printf("zodiac sign : aquarius\nsymbol : the water bearer\n");
    }
    else if (month == 2 && date >= 1 && date <= 18)
    {
        printf("zodiac sign : aquarius\nsymbol : the water bearer\n");
    }
    // feb 19to march 20
    else if (month == 2 && date >= 19 && date <= 28 / 29)
    {
        printf("zodiac sign : pisces\nsymbol :the fishes\n");
    }
    else if (month == 3 && date >= 1 && date <= 20)
    {
        printf("zodiac sign : pisces\nsymbol :the fishes\n");
    }
    else
    {
        printf("nothing");
    }
}
void main()
{
    int month[5], date[5], i;
    for (i = 1; i <= 4; i++)
    {
        printf("enter value of user 1 \n");

        printf("enter month");

        scanf("%d", &month[i]);

        printf("enter date");

        scanf("%d", &date[i]);
    }
    printf("zodiac sign of fist user\n");
    zodiacsign( month[0],  date[0]);

    printf("zodiac sign of second user\n");
     zodiacsign( month[1],  date[1]);

    printf("zodiac sign of third user\n");
  zodiacsign( month[2],  date[2]);

    printf("zodiac sign of forth user\n");
     zodiacsign( month[3],  date[3]);

    printf("zodiac sign of fifth user\n");
     zodiacsign( month[4],  date[4]);
}