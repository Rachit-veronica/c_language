#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three number");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
	{
		printf("A is max");
	}
	else
		if (b>a && b>c)
		{
			printf("b is max");
		}
		else
		{
			printf("c is max");
		}
	return 0;
}
