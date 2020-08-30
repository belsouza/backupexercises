/*
QUESTÃO 02: Um fazendeiro realizou um tratamento sobre sua plantação de café que gerou um crescimento constante de C % em sua produção, por ano. 
Considerando que atualmente sua produção anual seja de M  u.p., 
implementar um programa que determine a quantidade de anos necessária para que a produção duplique.
*/

#include <stdio.h>
#include <math.h>



int main(void)
{
	int i;
	float prod, c, cresc;
	float finprod;
	
	printf("Entre com a producao em um ano: ");
	scanf("%f", &prod);
	
	printf("Entre com o crescimento anual (em %%)");
	scanf("%f", &c);
	
	finprod = prod * 2;
	cresc = c / 100;	
		
	i = 1; //ano
	while(prod <= finprod)
	{
		prod = prod + (prod * cresc);
		if(finprod == prod)
		{
			break;
		}
		i++;
    }
	
	printf("\n%d ano(s)", i);
	return 0;	 
	
}
