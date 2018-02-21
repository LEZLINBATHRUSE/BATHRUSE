#include<stdio.h>
void main()
{
int i,j,c,a[50];
printf("Enter the elements of array");
for(i=0;i<10;i++)
{
scanf("\n%d",&a[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
for(i=10;i>0;--i)
{
printf("\n%d",a[i]);
}
}
