#include<stdio.h>
void main()
{
    int a[10],n,i,sum=0;
    printf("enter n value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum of the elements of the array is%d",sum);
}
