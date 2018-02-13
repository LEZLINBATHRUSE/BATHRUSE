#include <stdio.h>
void main() 
{
	char str[50];
	int i,c=1;
	printf("enter the sentence:");
	scanf("%[^\t]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			c=c+1;
		}
	}
	printf("\nno of words=%d",c);
}
