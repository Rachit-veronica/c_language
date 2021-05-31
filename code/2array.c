#include<stdio.h>
int main()
{
        int a[5]={2,3,4,5,6},sum=0,i;

        for(i=0;i<5;i++)
        {
	       	sum=sum+a[i];
        }
        printf("sum is %d\n",sum);
        return 0;
}
