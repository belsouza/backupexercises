/*

Lista 1 exercicio 3

*/

#include <stdio.h>

int main(void)
{
	char sex;
	float alt;
	printf ("\nEntre com o sexo(m ou f): ");
	scanf ("%c", &sex);
	
	if ((sex == 'm')|| (sex == 'f'))
	{
		printf ("\nEntre com a altura: ");
		scanf ("%f", &alt);
		
		if(sex == 'm')
		{
			printf ("\nPeso ideal: %.2f", (72.7 * alt) - 58.0);
		}
		else
		{
			printf ("\nPeso ideal: %.2f", (62.1 * alt) - 44.7);
		}
	}
	else
	{
		printf ("\nEntrada nao valida.");
	}
	
}
