#include<stdio.h>
#include<string.h>
void main()
{
int n,i,c=0,c1=0,c2=0;
char ch[15];
printf(“Enter the characters”);
scanf(“%s”,ch);
n=strlen(a);
for(i=0;i<n;i++)
{
if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))
{
c=1;
}
else if((ch[i]>=0)&&(ch[i]<=9))
{
c1=1;
}
else
{
c2=1;
}
if((c==1)&&(c1==2))
{
printf(“Yes”);
}
else
{
printf(“No”);
}
}
}
