#include<stdio.h>
void main ()
{
    int number , count=0;
    printf("enter value of number");
    scanf("%d",&number);

    while(count<number)
{
  count = count + 1;
    printf("%d\n",count);
}
  

}