#include <stdio.h>

void cpfground( int *base, int *digito )
{
	int status = 0, i = 1;
	int c = 0, temp;
	*digito = *base = 0;
	
	while((c != 13) && (i <= 11))
	{
		c = getch();
		putchar(c);
		temp = (c) - '0';
		
		//variaveis
		if(i <= 9)
		{
			if(i == 0)
			{
				*base = *base + temp; //primeiro digito - unidade
			}
			else
			{
				*base = (*base * 10) + temp; //os outros digitos sao multiplos de 10: dezena, centenas, etc.
			}
		}
		else
		{
			if(i == 10)
			{
				*digito = *digito + temp; //primeiro digito - unidade
			}
			else
			{
				*digito = (*digito * 10) + temp; //os outros digitos sao multiplos de 10: dezena, centenas, etc.
			}
		}
		
		//fim variaveis
		
		//Pontos
		if((i%3 == 0) && (i < 9))
		{
			putchar('.');
		}
		if((i%3 == 0) && (i >= 9))
		{
			putchar('-');
		}
		//Fim pontos	
		i++;
	
	}
}

int main(void)
{
	int base, digito;
	cpfground(&base, &digito);
	printf("\nBase: %d", base);
	printf("\nDigito: %d", digito);
}

