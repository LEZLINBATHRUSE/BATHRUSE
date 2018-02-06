#include<stdio.h>
void main()
{
int b[10],i,n;
printf("Enter n value");
scanf("%d",&n);
printf("Enter the arrays");
for(i=0;i<=n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<=n;i++)
{
printf("%d",b[i]);
}
if(b[0]>b[1]&&b[0]>b[2])
{
printf("The Maximum value is %d",b[0]);
}
else if(b[1]>b[2])
{
printf("%d",b[1]);
}
else
{
printf("%d",b[2]);
}
}

