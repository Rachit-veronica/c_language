#include<stdio.h>
int main()
{
        int a,b,c;
        printf("Enter three number");
        scanf("%d%d%d",&a,&b,&c);
        printf("%d",a>b?a:b>c?b:c);
        return 0;
}


