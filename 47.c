#include<stdio.h>
void main()
{
int a[20],i,j,c,n;
printf("Enter n value");
scanf("\n%d",&n);
printf("\nEnter the values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nThe sorted array is");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]<a[j])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
for(i=0;i<n;i++)
{
printf("\nThe largest value =%d",a[n-1]);
printf("\nThe smallest vakue =%d",a[0]);
}
}
