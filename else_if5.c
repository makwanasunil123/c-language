//write a programe to creat a calc
//->addition
//->subtraction
//->multipliction
//->division
//->modulus
#include<stdio.h>
void main()
{
    int number1 =0, number2 =0;
    int option = 0, answer = 0;
    printf("enter value of number1");
    scanf("%d",&number1);
    printf("enter value of number2");
    scanf("%d",&number2);

    printf("\nEnter 1 for additon");
    printf("\nEnter 2 for subtrsction");
    printf("\nEnter 3 for multipliction");
    printf("\nEnter 4 for division");
    printf("\nEnter 5 for modulus");

    printf("\nplese select any one option");
    scanf("%d",&option);

    if (option == 1)
     {
     answer = number1 + number2;
     printf("the value of answer is %d ",answer);
     }

     else if ( option == 2)
     {
        answer = number1 - number2;
        printf("the value of answer is %d",answer);
     }

     else if (option ==3)
     {
        answer = number1 * number2;
           printf("the value of answer is %d",answer);
     }
     else if (option ==4)
     {
        answer = number1 / number2;
           printf("the value of answer is %d",answer);
     }

     else if (option == 5)
     {
        answer = number1 % number2;
           printf("the value of answer is %d",answer);
     }

     else 
     {
        printf("invalid option");
     }



}