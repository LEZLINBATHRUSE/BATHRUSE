#include<stdio.h>
void main()
{
int n,i,f1=-1,f2=1,f3;
printf("Enter n value");
scanf("\n%d",&n);
for(i=0;i<n;i++)
{
f3=f1+f2;
printf("\t%d\t",f3);
f1=f2;
f2=f3;
}
}
