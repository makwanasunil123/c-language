#include<stdio.h>
void main ()
{
    float area,height,base;
    printf("enter value of height");
    scanf("%f",&height);
    printf("enter value of base");
    scanf("%f",&base);

    printf("\nvalue of height : %.4f\n\n",height);
    printf("value of base : %.4f\n\n",base);

    area = (height * base) / 2;
    printf("area of trikon is %.4f",area);


}