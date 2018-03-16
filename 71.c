#include<stdio.h>
#include<string.h>
void main()
{
int i,n;
char a[15],c[15];
printf("Enter the size");
scanf("%d",&n);
printf("Enter the string");
for(i=0;i<n;i++)
{
scanf("%c",a[i]);
}
c[i]=strrev(a[i]);
for(i=0;i<n;i++)
{
printf("%c",c[i]);
}
if(c[i]==a[i])
{
printf("Palindrome");
}
else
{
printf("Not a Palindrome");
}
}
