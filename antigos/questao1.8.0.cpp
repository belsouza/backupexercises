/*
Lista 1 exercicio 8
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char nh[50]; // Nome do hospede
	char ta; // tipo de apartamento
	int nd; // numero de diarias
	float vtd, vci, ts, sub, total; //valor de consumo,  valor total da diaria, taxa de serviço, conta subtotal
	
	printf ("\nEntre com o nome do hospede: ");
	gets(nh);
	printf ("\nEntre com o tipo de apartamento (A, B, C ou D):)");
	scanf ("%c", &ta);
	printf ("\nEntre com o numero de diarias: ");
	scanf("%d", &nd);
	printf ("\nEntre com o consumo interno: ");
	scanf("%f", &vci);
	
	if(ta == 'a')
	{
		vtd = nd * 350,00;		
	}
	else 
	{
		if (ta == 'b')
		{
			vtd = nd * 275,00;
		}
		else
		{
			if(ta == 'c')
			{
				vtd = nd * 200,00;
			}
			else
			{
				if(ta == 'd')
				{
					vtd = nd * 150,00;
				}
				else
				{
					vtd = 0;
				}
			}
		}
		
	}
	
	if (vtd != 0 )
	{
		sub = vtd + vci;
		ts = 0.1 * sub;
		total = sub + ts;
		
		printf ("\n\nNome do hospede: %s; \n", nh);
		printf ("Tipo do apartamento: %c; \n", ta);
		printf ("Valor total das diarias: %.2f; \n", vtd);
		printf ("Valor do consumo interno: %.2f; \n", vci);
		printf ("Subtotal: %.2f; \n", sub);
		printf ("Taxa de servico: %.2f; \n", ts);
		printf ("Total geral: %.2f; \n", total);
				
	}
	else
	{
		printf ("Entrada invalida!!!");
	}

	
	 
	
	

	return 0;
}





