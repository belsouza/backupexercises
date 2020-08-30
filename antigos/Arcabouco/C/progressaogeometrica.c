#include <stdio.h>
#include <stdlib.h>
/*
Questão 04: Pede-se a implementação de uma
função recursiva que exiba os n primeiros
termos de uma PG (Progressão Geométrica),
onde a1 é o seu primeiro termo e q a razão.
*/

void validaexpressao( float *a1, float *q, float *n )
{
	float a, b, c, d, e, f;
	a = b = c = d = e = f = 1;
	char expressao[20], t1[4], t2[4], t3[4];
	gets(expressao);
	sscanf(expressao, "%s %s %s", t1, t2, t3);
	sscanf(t1, "%f%*c%f", &a, &b);
	sscanf(t2, "%f%*c%f", &c, &d);
	sscanf(t3, "%f%*c%f", &e, &f);
	
	*a1 = a / b;
	*q = c / d;
	*n = e / f;
				
	//printf("%.0f  %.0f  %.0f  %.0f  %.0f  %.0f", a, b, c, d, e, f);
	
}

float pg( float a1, float q, float n)
{
	if(n > 0)
	{
		printf("%.1f ", a1);
		return pg(a1 * q, q, n - 1);
	}
	else
	{
		return 1;		
	}
}

int main(void)
{
	float a1, q, n, y;	
	validaexpressao( &a1, &q, &n );	
	y = pg(a1, q, n);
	return 0;
}
