/*
Marks       Grade

100 - 80     Distinction A

79 - 60       First Class B

59 - 45       Second Class C

45 -33          pass D

33 -           fail F
*/
#include<stdio.h>
void main()
{
    int marks ;
    printf("enter value of marks");
    scanf("%d",&marks);
   

    printf("the value of marks %d \n",marks);

    if(marks>=80 && marks<=100)
    {
        printf("pass with gread A");
    }
    else if(marks>=60 && marks<=79)
    {
        printf("fist class pass with gread B");

    }
    else if (marks>=45 && marks<=59)
    {
        printf("second class pass with gread C");
    }

    else if (marks>=33 && marks<=44)
    {
        printf("pass with gread D" );
    }
    else
    {
        printf("fail");
    }
   
}