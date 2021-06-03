#include<stdio.h>
#include <string.h>
int main()
{
	char s[20];
	int i,len;
	gets(s);
	len=strlen(s);
	printf("%d",len);
	printf("\n%s\n",s);

	for(i=len;i>=0;--i)
	{
		printf("%c",s[i]);
	}

	return 0;

}

