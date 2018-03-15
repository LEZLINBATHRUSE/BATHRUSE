#include<stdio.h>
void main() 
{
   int x=11;
   int y=1;
   int z=x-y;
   printf("Sum of x-y = %d", z);
   if(z%2==0)
   {
       printf("\nYes\n%d",z);
   }
   else
   {
       printf("\nNo");
   }
}
