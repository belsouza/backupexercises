#include <stdio.h>



int main ()
{
	char op;
	float a, b;
	int i, log;
	
	
	printf("\nCalculadora: \n\n(+) adicao\n(-) subtracao\n(*) multiplicacao\n(/) divisao\n(l) Logaritmo\n");
	
	do{
		printf("\nEntre com a operacao: ");
		
		fflush(stdin);
		scanf("%c", &op);
		
		
		switch(op)
		{
			case '+':
				printf ("\nEntre com o primeiro termo: ");
				scanf("%f", &a);
				
				printf ("\nEntre com o segundo termo: ");
				scanf("%f", &b);
				
				printf("\nResultado: %.0f + %.0f = %.1f\n", a, b,  a + b);
				
				break;
				
			case '-':
				
				printf ("\nEntre com o primeiro termo: ");
				scanf("%f", &a);
				
				printf ("\nEntre com o segundo termo: ");
				scanf("%f", &b);
				
				printf("\nResultado: %.0f - %.0f = %.1f\n", a, b,  a - b);
				
				break;
				
			case '*':
				
				printf ("\nEntre com o primeiro termo: ");
				scanf("%f", &a);
				
				printf ("\nEntre com o segundo termo: ");
				scanf("%f", &b);
				
				printf("\nResultado: %.0f * %.0f = %.1f\n", a, b,  a * b);
				
				break;
				
			case '/':
				
				printf ("\nEntre com o primeiro termo: ");
				scanf("%f", &a);
				
				printf ("\nEntre com o segundo termo: ");
				scanf("%f", &b);
				
				if(b == 0)
				{
					printf("\nResultado: Operacao nao eh possivel. Divisao por 0.\n");
				}
				else
				{
					printf("\nResultado: %.0f / %.0f = %.1f\n", a, b,  a / b);
				}				
				
				break;
				
			case 'l':
				printf ("\nEntre com o logaritmando: ");
				scanf("%f", &a);
				
				printf("\nEntre com a base: ");
				scanf("%f", &b);
				
				i = 0;
				
				while(b <= a)
				{					
					b *= b;					
					i++;					
				}
				
				printf("\nResultado: %d\n", i);
				
				break;	
				
		}
	}
	while(op != 's');
	printf("\nOperacao Encerrada!\n");
}
