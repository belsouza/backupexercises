#include <stdio.h>
#include <stdlib.h>

void exibir( int vet[], int tam )
{
	int i;
	for(i = 0; i < tam; i++)
	{
		printf("%d ", vet[i]);
	}
	printf("%20c", 125);
}

void modo1()
{
	int i, l, n = 1;
	int vet[n];
	
	printf("Programa Vet\n\nDigite o tamanho o vetor e o limite ");
	scanf("%d  %d",&n, &l);
	srand((unsigned)time(NULL));
	for(i = 0; i < n; i++)
	{
		vet[i] = rand()%l;
	}
	exibir(vet, n);
}

int main(void)
{
	modo1();
	return 0;
	
}
