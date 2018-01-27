#include<stdio.h>
void main()
{
int n,r,t,s=0;
printf("Enter n value");
scanf("%d",&n);
t=n;
while(t!=0)
{
r=t%n;
t=t/10;
s=s*10+r;
}
if(s==n)
{
printf("Palinrome");
}
else
{
printf("Not a Palinrome");
}
}
