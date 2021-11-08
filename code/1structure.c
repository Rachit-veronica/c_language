#include<stdio.h>
struct book{
	int a;
	float p;
	char n[20];
};
struct book input()
{

	struct book d;
	printf("enter book id, title and price");
	scanf("%d",&d.a);
	fflush(stdin);
	gets(d.n);
	scanf("%f",&d.p);
	return(d);
}
void display(struct book d)
{
	printf("\n %d %s %f",d.a,d.n,d.p);
}
void main()
{
	struct book d;
	d=input();
	display(d);
}
