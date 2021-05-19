#include<stdio.h>
#include <stdlib.h>
int main()
{
	while(1)
	{
	int a,b,c,d;
	printf("\n1. find add or even");
	printf("\n2. sum");
	printf("\n3. print the number");
	printf("\n4. exit");
	printf("\nenter your choise");	
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			{
				printf("\nenter a number");
				scanf("%d",&b);
				if(b%2==0)
				{
					printf("\neven");
				}
				else
				{
					printf("\nadd");
				}
			}
				break;
		case 2:
			{
				printf("\nenter two number");
				scanf("%d%d",&c,&d);
				printf("\nsum is %d",c+d);
			}
				break;
		case 3:
			{
				printf("\nenter a number");
				scanf("%d",&c);
				for(d=1;d<=c;d++)
				{
					printf("%d",d);
				}
			}	break;
		case 4:
				{
					exit(0);
				}
		default:
				{
					printf("invalid");
				}
				break;	
	}}
return 0;
}
