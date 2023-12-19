/* Write a program to display zodiac symbol & given zodiac sign from given birth day and month as per following criteria.
https://in.pinterest.com/pin/81698180718875314/
*/
#include<stdio.h>
void main ()
{
    int month , day;
    printf("enter month");
    scanf("%d",&month);
    printf("enter day");
    scanf("%d",&day);

    printf("month is %d and day is &d\n", month,day);

    // 3/21-31 4/1-19

    if("month == 3 && day >=21 && day<31 ")
    {
        printf("zodiac sign : aris\n symbol the ram\n");
    }
    else if(month == 4 && day >= 1 && day<=19 )
    {
        printf("zodiac sign : aris\n symbol the ram\n");
    }
    else if (month == 4 && day >=20 && day<=30)
    {
         printf("zodiac sign : taurus\n symbol the bull\n");
    }
    else if (month == 5 && day >=1 && day<=20)
    {
          printf("zodiac sign : taurus\n symbol the bull\n");
    }
    else if (month == 5 && day >=21 && day<=31)
    {
          printf("zodiac sign : gemini\n symbol the twins\n");
    }
    else if (month == 6 && day >=1 && day <=20)
    {
          printf("zodiac sign : gemini\n symbol the twins\n");
    }
    else if(month == 6 && day>=21 && day <= 30)
    {
          printf("zodiac sign : cancer\n symbol the carb\n");
    }
    else if (month == 7 && day >=1 && day <=22)
    {
          printf("zodiac sign : cancer\n symbol the carb\n");
    }
    else if (month == 7 && day >=23 && day <= 31)
    {
          printf("zodiac sign : leo\n symbol the lion\n");
    }
    else if (month == 8 && day >=1 && day <= 22)
    {
          printf("zodiac sign : leo\n symbol the lion\n");
    }
    else if (month == 8 && day >=23 && day <=31 )
    {
          printf("zodiac sign : virgo\n symbol the virgin\n");
    }
    else if ( month == 9 && day >=1 && day <=22)
    {
          printf("zodiac sign : virigo\n symbol the virgin\n");
    }
    else if (month == 9 && day >=23 && day <=30)
    {
          printf("zodiac sign : libra\n symbol the scales\n");
    }
    else if ( month == 10 && day >=1 && day <=22)
    {
      printf("zodiac sign : libra\n symbol the scales\n");
    }
    else if (month == 10 && day >=23 && day <=31)
      {
    printf("zodiac sign : scorpio\n symbol the scorpion\n");
    }
    else if (month == 11 && day >=1 && day <=21)
    {
      printf("zodiac sign : scorpio\n symbol the scorpion\n");
    }
    else if (month == 11 && day >=22 && day <=30)
    {
      printf("zodiac sign : sagittarius\n symbol the archer\n");

    }
    else if (month == 12 && day >=1 && day <=21)
    {
      printf("zodiac sign : sagitterius\n symbol the archer\n");
    }
    else if (month == 12 && day >=22 && day <=31)
    {
      printf("zodiac sign : caoricom\n symbol the goat\n");

    }
    else if (month == 1 && day >=1 && day <=19)
    {
      printf("zodiac sign : caoricom\n symbol the goat\n");
    }
    else if (month == 1 && day >=20 && day <=31)
    {
      printf("zodiac sign : aquarius\n symbol the water bearer\n");
    }
    else if (month == 2 && day >=1 && day <=19)
    {
      printf("zodiac sign : aquarius\n symbol the water bearer\n");
    }
    else if (month == 2 && day >=19 && day <=29)
    {
      printf("zodiac sign : pisces\n symbol the fishes\n");

    }
    else if (month == 3 && day >=1 && day <=20)
    {
      printf("zodiac sign : pisces\n symbol the fishes\n");
    }
    else
    {
      printf("invelide input");
    }
    printf("good by......");
}