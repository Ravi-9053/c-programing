#include<stdio.h>
void main()
{
    int num;
    int remainder;
    printf("enter a number");
    scanf("%d",&num);
    remainder=num%2;
    switch(remainder)
    {
        case 0:printf("%d is even.\n",num);
        break;
        case 1:printf("%d is odd.\n",num);
        break;
        default:printf("Invalid input\n.");
        break;
    }
}
