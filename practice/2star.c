#include<stdio.h>
int main()
{
        int a,b,c,e;
        printf("Enter a number\n");
        scanf("%d",&a);

        for(b=1;b<=a;b++)
        {


                for(c=1;c<=a;c++)
                {

                if (c>=a-b)
                        printf("*");
                else
                        printf(" ");

                }

        printf("\n");

        }
        return 0;
}

