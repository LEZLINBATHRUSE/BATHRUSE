#include<stdio.h>
void main()
{
int i,n;
char a[15];
printf("Enter n value");
scanf("\n%d",&n);
printf("\nEnter a character");
for(i=0;i<n;i++)
{
scanf("\n%c",&a[i]);
}
if((a[i]='a')||(a[i]='e')||(a[i]='i')||(a[i]='o')||(a[i]='u'))
{
printf("\nYes");
}
else
{
printf("No");
}
}
