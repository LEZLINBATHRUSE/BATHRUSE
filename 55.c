#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter a&b value");
scanf("\n%d\t",&a,&b);
c=a*b;
if(c%2==0)
{
printf("\nEven");
}
else
{
printf("Odd");
}
}
