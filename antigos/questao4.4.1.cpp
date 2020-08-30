/*

Lista 4 exercicio 4
Implementar um programa que exiba os N primeiros termos de uma PA (Progressão Aritmética) com primeiro termo a1 e razão r.

*/

#include <stdio.h>

int main(void)
{
	int a1, r, n, an, i;
	printf("\nEntre com o primeiro termo: ");
	scanf("%d", &a1);
	
	printf("\nEntre com a razao: ");
	scanf("%d", &r);
	
	printf("\nEntre com o numero de termos: ");
	scanf("%d", &n);
	
	printf("\n\n");
	for(i = 1; i <= n; i++)
	{
		an = a1 + ((i - 1) * r);
		printf("a(%d) = %d;\n", i, an);
	}
	return 0;
}
