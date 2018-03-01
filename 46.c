#include<stdio.h>
void main()
{
long int a,n;
printf("Enter n value");
scanf("%d",&n);
printf("Enter a value");
scanf("%d",&a);
while(a<=n)
{
a++;
printf("\nA=%d",a);
break;
}
}
