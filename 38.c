#include<stdio.h>
void main()
{
int a,b;
printf("Enter a & b value");
scanf("%d\t%d",&a,&b);
printf("Swapping 2numbers");
a=a^b;
b=b^a;
a=b^a;
printf("A=%d &B=%d",a,b);
}
