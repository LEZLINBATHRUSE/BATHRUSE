#include <stdio.h>
void main()
{
int n,i,c=0;
printf("Enter an integer ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
c=c*i;              
}
printf("C= %d",c);
}
