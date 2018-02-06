#include<stdio.h>
void main()
{
    int a,b,n,c,i,sum=0;
    printf("Enter n value");
    scanf("%d",&n);
    printf("Enter the a & b value ");
    scanf("%d\n%d",&a,&b);
    c=a;
    printf("AP series");
    for(i=0;i<n;i++)
    {
        printf("%d",c);
        sum=sum+c;
        c=c+b;
    }
    printf("AP series for  %d",c);
}

