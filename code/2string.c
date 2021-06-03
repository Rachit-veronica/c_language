#include<stdio.h>
int main()
{
	char s[3][10];
	int i;
	printf("enter three number");
	for(i=0;i<=2;i++)
	{
		gets(&s[i][0]);
		puts(s[i]);
	}
	return 0;
}

