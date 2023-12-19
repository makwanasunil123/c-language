// area of cylinder
#include<stdio.h>
float getarea(float r, float h, float pi)
{
    float area;
    area = (2 *pi*r*h) + (2* pi* (r*r));


    return area;
}

void main()
{
    float pi , r, h, area , ans;
    pi = 3.1415;

    printf("enter value of redus");
    scanf("%f", &r);

    printf("enter value of hight");
    scanf("%f", &h);

    printf("hight : %f\n\n redus : %f\n\n", r,h);
     
    ans = getarea(r,h,pi);
    
    
    printf("area of cylinder %.2f",ans);

}