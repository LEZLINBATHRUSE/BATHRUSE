#include<stdio.h>
void main()
{
int i,c=1;
char a[10];
printf(“Enter the string”);
scanf(“%[^\n]s”,&a);
for(i=0;a[i]!=”\0”;i++)
{
if(a[i]==' ')
{
c=c+1;
}
}
printf(“No of words =%d”,c);
}
