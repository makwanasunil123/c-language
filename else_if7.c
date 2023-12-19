//write a pogram to chak year is miliniyear or not
#include<stdio.h>
void main()
{
    int year , m_y;
    printf("enter year");
    scanf("%d",&year);

    printf("year is : %d\n",year);

    m_y = year % 1000;

    if(m_y==0)
    {
        printf("year is a miliniyear");
    }
     
     else
     {
        printf("year is a not miliniyear");
     }
} 