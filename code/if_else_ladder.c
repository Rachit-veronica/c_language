#include<stdio.h>
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if (a>=90)
		printf("A");
	else if (a>=80)
		printf("B");
	else if(a>=75)
		printf("C");
	else
		printf("D");
	return 0;
}
		
