/*

Lista 2 exercicio 2

*/

#include <stdio.h>

int main (void)
{
	float peso, g, pp;
	int num;
	 
	
	printf ("Entre com o peso: ");
	scanf ("%f", &peso);
	
	printf ("Entre com o numero do planeta: ");
	scanf ("%d", &num);
	
	pp = (peso / 10) * g;
	
	if ( num == 1 )
	{
		g = 0.37;
		printf ("Planeta: Mercurio; Peso:");		
	}
	else
	{
		if (num == 2)
		{
			g = 0.88;
			printf ("Planeta: Venus; Peso:");
		}
		else
		{
			if (num == 3)
			{
				g = 0.38;
				printf ("Planeta: Marte; Peso:");
			}
			else
			{
				if (num == 4)
				{
					g = 2.64;
					printf ("Planeta: Jupiter; Peso:");
				}
				else
				{
					if (num == 5)
					{
						g = 1.15;
						printf ("Planeta: Saturno; Peso:");
					}
					else
					{
						if (num == 6)
						{
							g = 1.17;
							printf ("Planeta: Urano; Peso:");
						}
						else
						{
							printf (" Entrada Invalida");
						}
					}
				}
			}
		}
	}
	
	pp = (peso / 10) * g;
	printf ("%.2f", pp);
	
	
	return 0;
	
}
