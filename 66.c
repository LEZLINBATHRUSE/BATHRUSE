#include<stdio.h>
void main()
{
int i,n,c=0;
printf("Enter n value");
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
if(n%i==0)
{
c=1;
break;
}
}
if(c==0)
{
printf("\nPrime = %d",n);
}
else
{
printf("Not a prime");
}
}
