/*
Determinar o maior e o menor valor dentre 3
*/

#include <stdio.h>

float maioroumenor( float a, float b, float c, char str[] )
{
	if (str == "menor")
	{
		if((a < b) && (a < c))
		{
			return a;
		}
		if(b < c)
		{
			return b;
		}
		return c;
	}	
	else if(str == "maior")
	{
		if((a > b) && (a > c))
		{
			return a;
		}
		if(b > c)
		{
			return b;
		}
		return c;
	}
	else
	{
		return 0;
	}
}

void main(void)
{
	float a, b, c;
	printf("Entre com tres numeros: ");
	scanf("%f  %f  %f", &a, &b, &c);
	printf("\nMaior: %.0f", maioroumenor(a, b, c, "maior"));
	printf("\nMenor: %.0f", maioroumenor(a, b, c, "menor"));
	return;
}
