#include<stdio.h>
#include<string.h>
void main()
{
    int c,d;
char a[50],b[50];
printf("Enter a sen");
scanf("%s",a);
printf("Enter b sen");
scanf("%s",b);
c=strlen(a);
d=strlen(b);
printf("\nC=%d  & D=%d",c,d);
if(c==d)
{
printf("\n%s\t%s",a,b);
}
else if(c>d)
{
printf("\t%s",a);
}
else 
{
printf("\t%s",b);
}
}
