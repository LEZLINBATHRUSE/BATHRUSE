#include<stdio.h>
void main()
{
int a,b;
printf("Enter a & b value");
scanf("%d\t%d",&a,&b);
printf("\nSwapping 2numbers");
a=a^b;
b=b^a;
a=b^a;
printf("\nA=%d \nB=%d",a,b);
}
