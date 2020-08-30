#include <stdio.h>
#include <stdlib.h>

int funcmaiscaro(int *vet, int tam)
{
	return (vet[0] + vet[tam-1]);
}

int funcmaisbarato(int *vet, int tam)
{	
	return (vet[(tam/2)-1] + vet[tam/2]);
}


int main(void)
{
	int i, j, n, num, npres, maiscaro = 0, maisbarato = 0;
	int *presentes;
	
	do
	{
		fscanf(stdin,"%d",&n);
		npres = 2 * n;
		presentes = (int *)	malloc(npres * sizeof(int));
		for(j = 0; j < npres; j++)
		{
			fscanf(stdin, "%d", &presentes[j]);			
		}	
		
		if(n != 0)
		{
			maiscaro = funcmaiscaro(presentes, npres);
			maisbarato = funcmaisbarato(presentes, npres);
			printf("%d  %d\n", maiscaro, maisbarato);
		}
		
	}
	while(n > 0);
	return 0;
}
