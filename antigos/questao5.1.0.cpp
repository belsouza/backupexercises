/*
lista 5 exercicio 1
QUESTÃO 01: Faça um programa que leia um número inteiro x e,
 em seguida, solicite ao usuário outros 50 valores inteiros. 
 Ao final, o programa deve exibir o total de múltiplos de x fornecidos.
*/

#include <stdio.h>

int main(void)
{
	int i, x, y, contM = 0;
	printf("Entre com um inteiro: ");
	scanf("%d", &x);
	
	for(i = 1; i <= 50; i++)
	{
		printf("Entre com o %do inteiro: ", i);
		scanf("%d", &y);
		
		if(y%x == 0)
		{
			contM++;
		}		
		
	}
	
	printf("\nDe 50 numeros digitados, %d sao multiplos do inteiro %d informado.  ", contM, x );
	return 0;
}
