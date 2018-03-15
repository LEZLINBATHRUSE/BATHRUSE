#include<stdio.h>
void main()
{
int k,i,n;
char a[15];
printf(“Enter a size”);
scanf(“%d\n%d”,&n,&k);
printf(“Enter  a character”);
for(i=0;i<n;i++)
{
scanf(“%c”,&a[i]);
}

printf(“Enter the no”);
for(i=0;i<k;i++)
{
printf(“%c”,a[i]);
}
}
