/*
Determinar o maior dentre três numeros
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

main(void)
{
	float a, b, c;
	printf("Entre com tres numeros: ");
	scanf("%f  %f  %f", &a, &b, &c);
	printf("\nMaior: %.0f", maior(a, b, c));
}
