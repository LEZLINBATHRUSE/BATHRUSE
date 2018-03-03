#include<stdio.h>
void main()
{
int i,s=1,n;
printf("Enter n value");
scanf("\n%d",&n);
for(i=1;i<=n;i++)
{
s=s*i;
}
printf("\n%d",s);
}
