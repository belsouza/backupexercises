#include <stdio.h>
#define LIM 30000

int main(void)
{
	int n;
	int num, temp = 1, i, ant = 0, soma = 0, cont = 1;
	
	scanf("%d", &n);
	if((n>1)&&(n<LIM))
	{
		//TESTE DE MESA
		for(i=1; (i < n); i*=10)
		{	
			printf("\n i = %d", i);			
			printf("\n n/i = %d", n/i);
			printf("\n n%%i = %d", n%i);
			printf("\n *****");				
			//1234 % 10 = 4 .: 1234 /10 = 123
			//1234 % 100 = 34 .: 1234 /100 = 12
		}
		
		for(i=1; (i < n); i*=10)
		{
			cont = i;
		}
		
		printf("\n cont = %d", cont);
		
	    for(i=1; (i < n); i*=10)
		{
			num = n%i;
			if(i==10)
			{
				ant = num;
				soma = num * cont;			
				printf("\n i = %d", i);	
			}
			
			if(i > 10)
			{
				temp = (num - ant) % i;
				soma = temp * i;
				printf("\n i = %d", i);
				printf("\n temp = %d", temp);
				printf("\n soma = %d", soma);
				printf("\n *****");		
			}
		}
		
	}
	else
	{
		printf("\nErro!");
	}
}
//1234 % 10 = 4 .: 1234 /10 = 123
			//1234 % 100 = 34 .: 1234 /100 = 12
