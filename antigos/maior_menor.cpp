/*
Dentre três números, determinar o maior e o menor
*/

#include <stdio.h>

void maioremenor( float a, float b, float c, float *maior, float *menor)
{
	if((a >= b) && (a >= c))
	{
		*maior = a;		
	}
	else
	{
		if(b >= c)
		{
			*maior = b;
		}
		else
		{
			*maior = c;
		}
	}
	
	if((a <= b) && (a <= c))
	{
		*menor = a;		
	}
	else
	{
		if(b <= c)
		{
			*menor = b;
		}
		else
		{
			*menor = c;
		}
	}	
}

int main(void)
{
	float a, b, c, maior, menor;
	printf("Entre com três numeros: ");
	scanf("%f  %f  %f", &a, &b, &c);
	maioremenor(a, b, c, &maior, &menor);	
	printf("\nMaior: %.0f e Menor: %.0f", maior, menor );

}


