/*
QUESTÃO 06: Faça um programa que leia 200 números inteiros. Ao final, exibir:
a) O maior número fornecido, de ordem par (isto é, o maior dentre o segundo, quarto, sexto, oitavo, etc valores fornecidos).
b) A média dos valores pares.
*/

#include <stdio.h>

int main(void)
{
	int i, num, contp = 0;
	float sumpar = 0; //Dá errado se não colocar float. Contador é inteiro e por isso não vou mudar.
	int tot = 5; //original 200. Não vou colocar 200 não >:/
	int maior = 0;
	float media;
	
	for(i = 1; i <= tot; i++)
	{
		printf("\nEntre com o %do numero: ", i);
		scanf("%d", &num);
		
		//Verificação da entrada do usuario - se eh par ou impar
				
		if(num%2==0) // se eh par
		{
			sumpar = sumpar + num; //soma os pares
			contp++; //conta os pares
		}
		
		//Verificação do contador: so eh contabilizada as entradas pares
		if(i%2 == 0)
		{
			if(maior == 0) // inicialização. qualquer numero é maior que 0 a não ser se colocar o - na frente.
			{
				maior = num; //começa com o primeiro numero sendo o maior
			}
			else
			{
				if(num > maior)
				{
					maior = num;
				}
			}
		}	
	}
	
	media = sumpar / contp;
	
	printf("\n********************************** \n");
	printf("\n\nO maior de ordem par eh: %d.\n", maior);
	printf("\nA media dos numeros pares e: %.2f.\n", media);
	return 0;
}
