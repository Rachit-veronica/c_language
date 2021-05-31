#include<stdio.h>
int main()
{
	int a[10],i,sum; /* esma hum logo ko 10 varable bana thi to hum logo na a[10] lekha kar 10 varable ban leya aur har ek varable ka naam diff hai aur har ek ka naam ko hum log a[1,2,3] se call kar sakta hai */
	float avg;
	printf("enter ten number");

	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]); /* yeha par har bar i ke value change hoye gaaur ussa har bar variable bhi change ho jaye ga aur hum log 10 value ko alga alga store kar sakta hai */ 
	}
	for(i=0;i<=9;i++)
	{
		sum=sum+a[i]; /* or yeha par bhi same kam ho raha hai*/
	}
	avg=sum/10.0;

	printf("avg is %d",&avg);

	return 0;
}
	
