#include<stdio.h>
void main()
{
int a[10],i,n;
printf("Enter n value");
scanf("\n%d",&n);
printf("Enter a values");
for(i=0;i<n;i++)
{
scanf("\n%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
printf("Even=%d",a[i]);
}
else
{
printf("Odd=%d",a[i]);
}
}
