#include<stdio.h>
int main()
{
	int a[2][3],i,j; /* agar hum log sath bahut sare variable ko create karna cahta hai to hum log array ka use karka declear kar sakta hai.  yeha par let kar lo ke [2] ka matlab school ha aur [3] ka matlab class hai hum log yaha par data enter karna chahta ha */

	printf("enter 6 number");

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			printf("\nprint %d\n",a[i][j]);
		}
	}
	return 0;
}
