#include<stdio.h>
void printsymbol(int n char s)
{
    
    int i;
    printf("\n");
    for(i=1; i<=n; i++)
    {
        printf("%c",s);
    }
    printf("\n");


}
void main ()
{
    int number;
    char symbol;
        printf("enter symbol");
        scanf("%c",&symbol);
        printf("enter number");
        scanf("%d",&number);

    printf("name : makwana sunil");

    printsymbol();

    printf("age : 23");

    printsymbol();

    printf("weight : 62");

    printsymbol();

}