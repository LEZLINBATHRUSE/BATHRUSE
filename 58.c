#include<stdio.h>
void main()
{
int a,b;
printf("Enter a&b value");
scanf("\n%d\t%d",&a,&b);
a=a^b;
b=b^a;
a=b^a;
printf("a=%d\n b=%d",a,b);
}
