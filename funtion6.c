#include<stdio.h>
int Add(int n1,int n2)
{
    int add;
    add = n1 + n2;
    return add;
}
int mul(int k, int m)
{
    int mul;
    mul = k*m;
    return mul;
}
int sub(int i, int j)
{
    int sub;
    sub = i - j;
    return sub;
}
int qube(int n)
{
    int qube;
    qube = n*n*n;
    return qube; 
}
int sq(int m)
{
    int sq;
    sq = m*m;
    return sq;
}
float Div( float m , float n)
{
    float div;
    div = m /n;
} 
void main()
{
    int number1,number2,ans;
    float div;
    printf("enter value number1");
    scanf("%d",&number1);
    printf("enter value number2");
    scanf("%d",&number2);
    printf("value of number1 is %d and number2 is %d\n\n",number1,number2);
    ans = Add(number1,number2);
    printf("addition is %d\n",ans);
    ans = mul(number1,number2);
    printf("multipilication is %d\n",ans);
    ans = sub(number1,number2);
    printf("subtraction is %d\n",ans);
    ans = qube(number1);
    printf("qube is %d\n",ans);
    ans = sq(number2);
    printf("squre is %d\n",ans);
    div = Div(number1,number2);
    printf("division is %f\n",div);

}