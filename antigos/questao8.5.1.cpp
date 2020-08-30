/*
QUESTÃO 05:
Elaborar uma função que, dado um conjunto de 300 valores inteiros, distribua-os em 2 vetores conforme forem pares ou ímpares.
Correção- não é é isso que pensamos, pois não começa do zero.
*/
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#define TAM 300

void preenchevetor( int *vet, int size )
{
	int i, r;
	srand(time(NULL));
	for(i = 0; i < size; i++)
	{		
		r = rand()/100; 
		printf("%d ", r);
	}
}
/*
void distribuir( int *vet, int *quantA, int *vetB, int *quantB, int *vetR, int *quantR  )
{
	int i, contpar = 0, contimpar = 0;
	for(i = 0; i <= quantA; i++)
	{
		if((vet[i]%2==0))
		{
			vetB[contpar]= vet[i];	
			contpar++;
		}
		else
		{
			vetR[contimpar] = vet[i];		
			contimpar++;
		}
	}
	//corrigir
 *quantP = contpar;
 *quantI = contimpar;
}

void exibirvetor( int *vet, int size )
{
	int i;
	for(i = 0; i <size; i++)
	{
		printf("%d ", vet[i] );
	}
}

*/
int main(void)
{
	int vet[TAM];
	preenchevetor(vet, TAM );
	/*
	int i;
	int v[TAM], pares[TAM], impares[TAM];	
	
	for(i = 0; i <= tot; i++)
	{
		printf("Entre com um elemento: ");
		scanf("%d", &v[i]);
	}
	
	distribuir(v, TAM, pares, &quantP, impares, &quantI);

	exibirvetor(vetA, TAM);
	exibirvetor(pares, quantP);
	exibirvetor(impares, quantI);
	*/
}
