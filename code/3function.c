/*takes something return nothing*/

#include<stdio.h>
void main()
{
     int a,b;

     void add(int,int); /*humko compiler ko batna paade ga ke hum log kahe par bhi 2 int ke value use kar sakta hai*/

     printf("enter two number");

     scanf("%d%d",&a,&b);

     add(a,b); /* jab hum function ko call karta time hum log ye bata rahe hai ke a and b man ke value ka use add function ma kar rahe hai*/  
}
void add(int e,int f) /* hum log yeha par ye bata rahe hai ke a ke value ko e aur b ke value lo f ma essign kar rahe hai */
{
        int c;

        c=e+f;

        printf("\nsum is %d",c);
}  
