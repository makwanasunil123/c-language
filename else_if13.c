//write a pogram to fing larger area of two triangel
#include<stdio.h>
void main ()
{
        float area1,height1,base1,area2,height2,base2;
            printf("enter value height1  ");
            scanf("%f",&height1);
            printf("enter value base1");
            scanf("%f",&base1);
            printf("enter value height2");
            scanf("%f",&height2);
            printf("enter value base2");
            scanf("%f",&base2);

            printf("value of height1 %.4f\n",height1);
            printf("value of base1 %.4f\n",base1);
            printf("value of height2 %.4f\n",height2);
            printf("value of base2 %.4f\n",base2);


            area1 = (height1 * base1) / 2;
            area2 = (height2 * base2) / 2;

            printf("value of area1%.4f\n",area1);
            printf("value of area2%.4f\n",area2);

            if(area1>area2)
            {
                printf("area1 is large");
            }
            else if(area2>area1)
            {
                printf("area2 is large");

            }
            else 
             {
                printf("both are same");
             }

            

}