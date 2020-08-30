#include <stdio.h>

int main(void)
{
	int n, i = 10, oresto = 1, cont = 0, ant = 0, modulo, soma = 0;
	float temp;	
	
	printf("Entre com um numero inteiro: ");
	scanf("%d", &n);
	
	while (n != oresto)
	{
		oresto = n % i;
		modulo = oresto - ant;
		temp = ( modulo * 10 ) / i;	
		soma = soma + (int)temp;		
		printf("\n%d / %d = %f", modulo, i, temp);	
		i = i * 10;
		cont = cont + 1;
		ant = oresto;		
	}
	
	printf("\n\n%d", cont);
	printf("\n\n%d", soma);
	
}
