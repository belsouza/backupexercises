/*
Trocar os valores a e b
*/

#include <stdio.h>

void troca(float *a, float *b)
{
	float aux = *a;
	*a = *b;
	*b = aux;
}

int main()
{
	float a, b;
	printf ("\nEntre com os valores de a e b: ");
	scanf("%f  %f", &a, &b);
	troca(&a, &b);
	printf ("\nNovos valores: a: %.0f e b: %.0f", a, b);
}
