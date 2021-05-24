/*takes nothing return something*/

#include<stdio.h>
void main()
{
     int e;
     e=add(); 	/* hum log add() fuction ko call kar rahe hai aur hum log e ma add() function ko assign kar rahe hai (matlab add() ke value e ma save ho rahe hai) */

     printf("ans %d",e);
}
    int add() /* hum logo ko har bar data type lekna hai jo hum log return ma assign kar rahe hai aur hum log 2 number ko add karna ka program bana rahe hai */
{
        int a,b,c;
	printf("enter a two number");
	scanf("%d%d",&a,&b);
	c=a+b;
	return (c); /* yeha par hum log return (c) kar rahe hai matlab jo bhi bracket ma lekha ga wo value wapas ja kar jaha add()function ko call kera thi waha par ja kar store ho jaya ge(add() ke jaga par c ke value a jaye ge) */
}

