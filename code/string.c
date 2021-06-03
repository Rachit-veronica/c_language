#include<stdio.h>
int main()
{
	char R[10]={'r','a','c','h','i','t','\0'}; /* ye ha par hum log ek 10 number ka array bana rahe hai or usma ek string ko input kar rahe hai aur hum \0 ko es leya lekhta hai kyu ke hum log complire ko ye bata rahe hai ek bus yahe thi string hai*/
	int i;
	for(i=0;i<6;i++)
	{
		printf("%c",R[i]); /* ye ha par hum log char print karwa rahe hai loops ke help se */
	}

	printf("\n%s\n",R); /* yeha par hum fir se print karwa rahe ha laken hum log es bar %s ka use kar rahe hai.%s ka matlab pur string ko print kar dena.*/ 

	puts(R); /* yeha par bhi hum log string ko print kar rahe hai by help of puts function. printf or puts ek he kam karta hai laken printf ma line change nahi hote hai magar puts ma kam khatam hona ka bad line automatically change ho jate hai */
	
	return 0;
}

// ye print karna ka tareta same ha esma answer same aata hai 
