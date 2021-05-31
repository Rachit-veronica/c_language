#include<stdio.h>
int main()
{
	int e;
	void add(int);
	e=fun(3); /* hum function ke value 3 ko send kar rahe hai kyu ke hum is 3 value ko dosra function ma call kar sakta hai*/
	printf("fun is %d\n",e);
}
int fun(int a)
{
	int b;
	if(a==1){ /* agar a=1 hoga to hum log 1 value ko return kare ga laken agar hum log recursion ka use kar rahe ha to some case ma har bar else he chala ga aur jab tak else wale condition true nahi ho jate*/	
		return (1);
	}
	else
	{
		b=a+fun(a-1);/*ye wale condition ko true karna ka leya hum log bar bar return (b) ko chala kar else wale condition ko run karya ga */
	}
	return (b);
}

