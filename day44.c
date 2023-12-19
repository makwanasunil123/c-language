#include<stdio.h>
void main()
{
    int number1,
    number2,add,sub,mul,mod;
    float divison;
    printf("\n\nenter value of number 1");
    scanf("%d",&number1);
    printf("\nenter value of number 2");
    scanf("%d",&number2);
    printf("value of number 1 is %d and number 2 is add = number1 + number2");
    printf("adition is %d \n\n",add);

    sub = number1 + number2;

    printf("adition is %d \n\n",add);

    sub = number1 - number2;

    printf("subtraction is %d \n\n",sub);

    mul = number1 * number2;

    printf("multiplication is %d \n\n", mul);

    divison = number1 / number2;

    printf("divison is %d \n\n",divison);

    mod = number1 % number2;

    printf("modul is %d \n\n",mod);

    

}