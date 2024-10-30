#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("enter a and b values");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case '+':printf("Addition is %d",a+b);
        break;
        case '-':printf("Substraction is %d",a-b);
        break;
        case '*':printf("multiplication is %d",a*b);
        break;
        case '/':printf("Division is %d",a/b);
        break;
        case '%':printf("Remainder is %d",a%b);
        break;
        default:printf("Invalid operation");
        break;
        }
}
