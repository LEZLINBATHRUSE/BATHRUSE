#include<stdio.h>
void main()
{
int b[50];
int i,j,c,n;
printf("Enter n value");
scanf("%d",&n);
printf("Enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
printf("The sorted array ");
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(b[i]>b[j])
{
c=b[i];
b[i]=b[j];
b[j]=c;
}
}
}
for(i=0;i<n;i++)
{
printf("\nThe array of sorted elements is %d",b[i]);
}
for(i=0;i<n;i++)
{
printf("The maximum =%d",b[n-1]);
}
}
