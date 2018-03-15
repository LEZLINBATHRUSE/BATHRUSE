
#include<stdio.h>
void main()
{
int b[50];
int i,j,c;
printf("Enter the array elements");
for(i=0;i<5;i++)
{
scanf("%d",&b[i]);
}
printf("The sorted array ");
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(b[i]>b[j])
{
c=b[i];
b[i]=b[j];
b[j]=c;
}
}
}
for(i=0;i<5;i++)
{
printf("\nThe array of sorted elements is %d",b[i]);
}
printf("\n%d",b[5-1]);
}
