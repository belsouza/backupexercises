//importação de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//definição de constantes
#define Q 200

//protótipos das funções
void preencher (int v[], int quant);
void exibir (int v[], int quant);

//Implementação da main
int main ()
{
	int vetor[Q];
	
	//preenchendo o vetor com números aleatórios
	preencher (vetor, Q);
	
	//exibindo o vetor gerado
	exibir (vetor, Q);
}


//implementação das funções
void preencher (int v[], int quant)
{
	int i;
	
	//esse comando vai permitir que, a cada execução, um conjunto diferente de valores seja gerado e inserido no vetor
	srand(time(NULL));
	
	//preenchendo o vetor v com números aleatórios
	for (i=0;i<quant;i++)
	{
		v[i] = rand()%10;     //gerará um número no intervalo de 0 a 9, neste caso
	}
}

void exibir (int v[], int quant)
{
	int i;
	
	printf ("Elementos do vetor: ");
	
	for (i=0;i<quant;i++)
	{
		printf ("%d ", v[i]);
	}	
	printf ("\n\n");
}

