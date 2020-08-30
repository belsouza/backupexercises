/*

Lista 2 exercicio 1

*/

#include <stdio.h>

int main (void)
{
	float peso, alt, imc;
	printf ("\nEntre com o peso: ");
	scanf ("%f", &peso);
	
	printf ("\nEntre com a altura: ");
	scanf ("%f", &alt);
	
	imc = peso / (alt * alt);
	
	if (imc < 18.5)
	{
		printf ("Acima do peso");
	}
	else
	{
		if (imc < 25)
		{
			printf ("Peso ideal");
		}
		else
		{
			if (imc < 30)
			{
				printf ("Sobrepeso");
			}
			else
			{
				if (imc <  35)
				{
					printf ("Obesidade grau I");
				}
				else
				{
					if (imc < 40)
					{
						printf ("Obesidade grau II");
					}
					else
					{
						printf ("Obesidade grau III");
					}
				}
			}
		}
	}
	
	return 0;
}
