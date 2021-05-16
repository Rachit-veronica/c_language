#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three number");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		printf("A is max");
	}
	else
		{
			if (b>c)
			{
				printf("B is max");
			}
			else
			{
				printf("C is max");
			}
		}
	return 0;
}
