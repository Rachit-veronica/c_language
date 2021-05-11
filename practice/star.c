#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a number");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=a;c++)
		{
		if(c<=b)
			printf("*");
		else
			printf(" ");
		
		}

	printf("\n");
	
	}
	return 0;
}

