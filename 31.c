#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int n,c=0,i;
	scanf("%[^\t]s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
		{
		c++;
		}
	}
	printf("%d",c);
}
