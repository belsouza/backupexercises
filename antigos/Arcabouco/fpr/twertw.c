#include <stdio.h>
#include <stdlib.h>

void levetor( int v[], int tam )
{
	int i;
	for(i = 0; i < tam; i++)
	{
		printf("%d ", v[i]);
	}
}

void criarvetor( int **v, int n, int a )
{
	int i, *temp;
	temp = (int *) malloc(n * sizeof(int));
	srand(time(NULL));	
	for(i = 0; i < n; i++)
	{
		temp[i] = (rand()% (a - 1));
	}
	*v = temp;
}

int main(void)
{	
	int n, a, *vet;
	printf("\nCrio um vetor generico: ");	
	scanf("%d  %d", &n, &a);
	criarvetor(&vet, n, a);
	levetor(vet, n);
	return 0;
	
}
