#include<stdio.h>
void main()
{
int a,b,c;
printf(“Enter  a & b value”);
scanf(“%d\n%d”,&a,&b);
c=a+b;
printf(“%d”,c);
if(c%2==0)
{
printf(“Even”);
}
else
{
printf(“Odd”);
}
}
