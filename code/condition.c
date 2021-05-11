#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two number\n");
	scanf("%d%d",&a,&b);
	c=a<b?printf("A\n"):printf("B\n");
	printf("%d\n",c);
	return 0;
}

