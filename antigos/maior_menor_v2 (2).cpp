/*
Dentre três números, determinar o maior e o menor
*/

#include <stdio.h>

float maioremenor( float a, float b, float c, float *menor)
{
	float m;
	
	if((a >= b) && (a >= c))
	{
		m = a;		
	}
	else
	{
		if(b >= c)
		{
			m = b;
		}
		else
		{
			m = c;
		}
	}
	
	if((a <= b) && (a <= c))
	{
		m = a;		
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
	return m;	
}

int main(void)
{
	float a, b, c, ma, menor;
	printf("Entre com três numeros: ");
	scanf("%f  %f  %f", &a, &b, &c);
	ma = maioremenor(a, b, c, &menor);	
	printf("\nMaior: %.0f e Menor: %.0f", ma, menor );
}


