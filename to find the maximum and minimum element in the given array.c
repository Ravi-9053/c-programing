#include<stdio.h>
void main()
{
    int a[10],n,i;
    int max;
    int min;
    printf("enter n value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
 max=a[0];
 min=a[0];
  for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        }
        if(a[i]<min)
        {
        min=a[i];
        }
      }
      printf("the maximum element is:%d\n",max);
      printf("the minimum element is:%d\n",min);
}
          
