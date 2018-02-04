
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,b=0;clrscr();
printf("Enter the a values");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("The marks are");
for(i=0;i<10;i++)
{
printf("%d\t",a[i]);
b=b+a[i];
}
printf("b=%d",b);
getch();
}
