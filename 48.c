#include<stdio.h>
void main()
{
int a[20],i,avg,sum=0;
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
    sum=sum+a[i];
}
avg=sum/5;
printf("Avg =%d",avg);
}
