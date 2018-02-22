#include <stdio.h>
void main()
{
    int i,c=0;
    char a[50];
    printf("Enter the sentence");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            c=c+1;
        }
        printf("\t");
    }
    printf("\n No of numeric characters =%d",c);
    }
