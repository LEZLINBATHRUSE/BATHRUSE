#include<stdio.h>
#include<string.h>
void main()
{
char a[10],b[10]c[10],d[10];
printf("Enter A sen");
scanf("\t%s",&a);
printf("Enter B sen");
scanf("\t%s",&b);
c=strrev(a);
d=strrev(b);
printf("The reverse string is %s\t%s",c,d);
}
