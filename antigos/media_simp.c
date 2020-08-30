/*
Calcular media de um aluno
*/

#include <stdio.h>

float mediaTres (int a, int b, int c)
{
	return (a + b + c)/ 3.0;
}

void main(void)
{
	int a, b, c;
	float jus;
	printf("\nEntre com as notas: ");
	scanf("%d  %d  %d",&a, &b, &c);	
	jus = mediaTres(a, b, c);
	printf("\nMedia: %.1f", jus);	
}
