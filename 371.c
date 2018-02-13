#include<stdio.h>
voi main()
{
int a,b,c;
printf("Enter a & b values");
scanf("%d\t%d",&a,&b);
c=a;
a=b;
b=c;
printf("The values of a =%d &b=%d",a,b);
}
