/*
Determinar o maior e o menor valor dentre 3
*/

#include <stdio.h>

float maior( float a, float b, float c)
{
	if((a > b) && (b > c))
	{
		return a;
	}
	
	if(b > c)	
	{
		return b;
	}
		
	return c;	
}

float menor( float a, float b, float c)
{
	if((a < b) && (b < c))
	{
		return a;
	}
	
	if(b < c)	
	{
		return b;
	}
		
	return c;	
}

void main(void)
{
	float a, b, c;
	printf("Entre com três numeros: ");
	scanf("%f  %f  %f", &a, &b, &c);
	printf("\nMaior: %.0f", maior(a, b, c));
	printf("\nMenor: %.0f", menor(a, b, c));
}


