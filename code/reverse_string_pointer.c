#include<stdio.h>
char* reverse(char *p);
void main()
{	
	printf("%s",reverse("computer"));
}
char* reverse(char *p)
{
	int i=0,l=0;
	char ch=0;
	for(l=0;*(p+l)!='\0';l++);
	for(i=0;i<l/2;i++){
		ch=*(p+i);
		*(p+i)=*(p+l-1-i);
		*(p+l-1-i)=ch;
	}
	return (p);

}
