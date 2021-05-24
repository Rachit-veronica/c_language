/*Take something,Return something*/
#include<stdio.h>
void main()
{	/* esma hum log user se 2 input karwa laga main ma aur uske value ko dosre body ma send or set kar daya*/ 
	int a,b,c;
	int add(int,int);
	printf("enter two number");
	scanf("%d%d",&a,&b);
	c=add(a,b); /*s ke value c ma assign ho jaye ge*/
	printf("sum is %d",c);
}
int add(int e,int f) /* hum log yeha par 2 number ko add karka s ma assign kar daya aur fir usko return() kar daga */
{
	int s;
	s=e+f;
	return (s); /*hum log s ke value ko add(s,b) ke jagah ko rakha gaya */ 
}
