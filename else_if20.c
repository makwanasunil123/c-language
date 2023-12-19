//write a program to findout largest rectangle's volume from 3 rectangle dimensions using nested decision making statement 
#include<stdio.h>
void main()
{
    float area1 , area2 , area3 , length1 , length2 , length3 , width1 , width2 , width3;
    printf("enter value of length1");
    scanf("%f",&length1);
    printf("enter value of width1");
    scanf("%f",&width1);
    printf("enter value of length2");
    scanf("%f",&length2);
    printf("enter value of width2");
    scanf("%f",&width2);
    printf("enter value of length3");
    scanf("%f",&length3);
    printf("enter value of width3");
    scanf("%f",&width3);

    printf("value of length1 %f and width1 %f\n",length1,width1);
    printf("value of length2 %f and width2 %f\n",length1,width2);
    printf("value of length3 %f and width3 %f\n",length3,width3);

    area1 = width1 * length1;
    area2 = width2 * length2;
    area3 = width3 * length3;

    printf("value of area1 is %f\n",area1);
    printf("value of area2 is %f\n",area2);
    printf("value of area3 is %f\n",area3);

    if (area1>area2 && area1>area3)
    {
        printf("area1 is larger");
    }
    else if (area2>area1 && area2>area3)
    {
        printf("area2 is larger");
    }
    else if (area3>area1 && area3>area2)
    {
        printf("area3 is larger");
    }
    else
    {
        printf("invalide");
    }

}