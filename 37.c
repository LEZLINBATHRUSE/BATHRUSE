#include<stdio.h>
void main()
{
int a,b;
printf("Enter a & b value");
scanf("%d\n%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a = %d & \n b = %d",a,b);
}
