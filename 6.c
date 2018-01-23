
#include<stdio.h>
void main()
{
int N;
printf("Enter the value of N");
scanf("%d",&N);
if(N%4==0 && N%100!=0)
{
printf("\n LEAP YEAR");
}
else 
{
printf("NOT LEAP YEAR");
}
}
