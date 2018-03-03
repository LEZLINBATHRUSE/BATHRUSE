#include<stdio.h>
void main()
{
int a[10],i;
printf("enter the values");
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
printf("The reverse values are");
for(i=3;i>=0;--i)
{
printf("%d",a[i]);
}
}
