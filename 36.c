
#include <stdio.h>
void main()
{
    int i,c=0;
    char b[50];
    printf("Enter the sentence");
    scanf("%[^\n]s",b);
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]>='0' && b[i]<='9')
        {
            c=c+1;
        }
        printf("\t");
    }
    printf("\n No of numeric characters =%d",c);
    }
