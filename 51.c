#include<stdio.h>
void main()
{
int a[5],n,i;
printf("Enter n value");
scanf("\n%d",&n);
printf("Enter the values");
for(i=0;i<n;i++)
{
scanf("\n%d",&a[i]);
}
printf("The no are");
for(i=0;i<n;i++)
{
printf("\t%d\t",a[i]);
}
}
