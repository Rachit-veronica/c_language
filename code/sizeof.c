#include<stdio.h>
int main()
{
	int x,y,w,e,r;
	float k;
	double d;
	char ch;
	y=sizeof(x);
	w=sizeof(k);
	e=sizeof(d);
	r=sizeof(ch);
	printf("%d\n%d\n%d\n%d\n",y,w,e,r);
	return 0;
}
