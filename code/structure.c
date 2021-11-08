#include<stdio.h>

struct date{
	int d,m,y;
};

void main()
{
	struct date today;
		scanf("%d %d %d",&today.d,&today.m,&today.y);
		printf("date is %d/%d/%d",today.d,today.m,today.y);
}



