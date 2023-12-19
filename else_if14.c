/*
formula : https: // www.nursingcenter.com/getattachment/c5868853-d6da-4f97-81d3-8a2c50303d91/Body-Mass-Index-and-Body-Surface-Area-What-s-the-D.aspx

condition : https://www.cdc.gov/healthyweight/images/assessing/bmi-adult-fb-600x315.jpg?_=07167 
*/

#include<stdio.h>
void main ()
{
    float weight,bmi,f_m,i_m,hight;
    int foot,inch;
    printf("enter weight :");
    scanf("%f",&weight);
    printf("enter hight in foot :");
    scanf("%d",&foot);
    printf("enter hight in inch");
    scanf("%d",inch);

    f_m = foot / 3.28;
    i_m = inch / 39.37;

    hight = i_m + f_m;

    printf("weight is %.4f\n", weight );
    printf("hight is %.4f\n", hight );

    bmi = weight/ (hight * hight );

    printf("BMI is : %.4f\n\n", bmi );

    if(bmi>0 && bmi>18)
    {

        printf("you are under weight");

    }
    else if (bmi>=18 && bmi<25)

    {
        printf("you are normal");

    }
    else if(bmi>=25 && bmi<30)
    {
        printf("you are over weight");
    }
    else if(bmi>=30 && bmi<35)
    {
        printf("you are obese");
    }
    else if(bmi>=35)
    
    {
        printf("extremeay obese");
    }
    else
    {
        printf("invelide input");
    }

}