#include<stdio.h>
int main()
{
	int a,i=1;
	printf("enter a number");
	scanf("%d",&a);
	while(i<=a)
	{
		printf("\nrachit");
		i++;
		if (a<=i)
		{	
			break;
		}
	}
	printf("\n%d",i);
	return 0;
}


