/*

Lista 1 exercicio 2

*/

#include <stdio.h>

int main (void)
{
	int i;
	printf ("Entre com a idade: ");
	scanf ("%d", &i);
	if (i >= 0){
		
		if(i <= 4)
		{
			printf ("\nInfantil A");
		}
		else
		{
			if(i <= 7)
			{
				printf ("\nInfantil B");
			}
			else
			{
				if(i <= 10)
				{
					printf ("\nInfantil C");
				}
				else
				{
					if (i <= 13)
					{
						printf ("\nJuvenil A");
					}
					else
					{
						if (i <= 17)
						{
							printf ("\nJuvenil B");
						}
						else
						{
							printf ("\nAdulto");
						}
					}
				}
			}
		}
		
	}
	else{
		printf ("\nEsta nao eh uma idade valida!");
	}
	return 0;
}
