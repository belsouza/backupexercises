#include <stdio.h>

int main(void)
{
	int i, j, n, cont = 0;
	int b, c, ant = -99999;
	
	printf("Entre com o numero: ");
	scanf("%d", &n);
	
	i = 1;
	while(i <= n)
	{
		cont += 1;
		i *= 10;
	}
	
	printf("%d", cont);	
	
	j = 10;
	while(j <= n*10)
	{
	   c = (n % j)*10 / j;
	   if(c == ant)
	   {
	   		printf("O numero %d esta repetido.", c);
	   }
	  
	   printf("\n%d", c);
	   ant = c;	
	   j *= 10;
	   
	}
	
	
	 
	 
	 
}
