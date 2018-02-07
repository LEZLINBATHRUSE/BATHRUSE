#include<stdio.h>
void main()
{
int i,a=-1,b=1,c,n;
printf("Enter n value");
scanf("%d",&n);
for(i=0;1<n;i++)
{
c=a+b;
printf("c = %d",c);
a=b;
b=c;
}
}
