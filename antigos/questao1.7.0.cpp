/*
Lista 1 exercicio 7
*/

#include <stdio.h>

int main(void)
{
	int horas;
	float r, ss;
	printf ("Entre com as horas trabalhadas: ");
	scanf("%d", &horas);
	printf ("Entre com o valor da hora: ");
	scanf ("%f", &r);
	if (horas <= 40)
	{
		ss = r * horas;
	}
	else
	{
		ss = 1.5 * horas - 60 + 40 * r;
	}	
	printf (" O  salario semanak=l eh: %.2f", ss);
	return 0;
}
