#include<stdio.h>

void input(int *p)
{
	int i;
	for(i=0;i<=4;i++)
	{
		scanf("%d",p+i);
	}
}
void display(int *p)
{
	int i;
	for(i=0;i<=4;i++)
	{
 	printf("%d\n\n",*(p+i));
	}
}

void sort(int *p)
{
	int round,t,i;
	for(round=1;round<=4;round++)
	{
		for(i=0;i<=4-round;i++)
		{
		if(*(p+i) >*(p+i+1))
		{
			t=*(p+i);
			*(p+i)=*(p+i+1);
			*(p+i+1)=t;
		}
		}
	}
}



void print_int (int *p) {


	
	printf("*p= %d\n",*p);
	printf("p= %d\n",p);

}

int main()
{
	
        int a[5];
        input(a);
       display(a);
       printf("\na= %u", a);
        sort(a);
        display(a);

/*
	int p=6;
	print_int(&p);
	*/
 	return 0;
}
