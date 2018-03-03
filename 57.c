#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter a&b value");
scanf("\n%d\t%d",&a,&b);
c=a;
a=b;
b=c;
printf("a=%d\n b=%d",a,b);
}

