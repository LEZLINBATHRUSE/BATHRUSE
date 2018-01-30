#include<stdio.h>
void main()
{
    int n,on,rm,r=0;
    printf("Enter n value:");
    scanf("%d",&n);
    on=n;
    while(on!=0)
    {
        rm=on%10;
        r+=rm*rm*rm;
        on/=10;
    }
    if(r=n)
    {
        printf("\t%d is an armstrong number",n);
    }
    else
    {
        printf("\n%d is noy an armstrong number",n);
    }
}
