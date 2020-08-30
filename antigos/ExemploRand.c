//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//defini��o de constantes
#define Q 200

//prot�tipos das fun��es
void preencher (int v[], int quant);
void exibir (int v[], int quant);

//Implementa��o da main
int main ()
{
	int vetor[Q];
	
	//preenchendo o vetor com n�meros aleat�rios
	preencher (vetor, Q);
	
	//exibindo o vetor gerado
	exibir (vetor, Q);
}


//implementa��o das fun��es
void preencher (int v[], int quant)
{
	int i;
	
	//esse comando vai permitir que, a cada execu��o, um conjunto diferente de valores seja gerado e inserido no vetor
	srand(time(NULL));
	
	//preenchendo o vetor v com n�meros aleat�rios
	for (i=0;i<quant;i++)
	{
		v[i] = rand()%10;     //gerar� um n�mero no intervalo de 0 a 9, neste caso
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

