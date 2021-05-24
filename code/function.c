#include<stdio.h>
int main()
{
	sum();
	sub();
	return 0;
}

sum()
{
	int a,b,c;
	printf("\nsum");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\nthe sum of two number is %d",c);
}

sub()
{
	int a,b,c;
        printf("\nsub");
        scanf("%d%d",&a,&b);
        c=a-b;
        printf("\nthe sum of two number is %d",c);
}


