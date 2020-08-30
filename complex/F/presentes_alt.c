#include <stdio.h>

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
	int i, j, n, num, npres, presentes[20], maiscaro = 0, maisbarato = 0;
	FILE *fp;
	fp = fopen("stdin.txt","r");
	
	for(i = 0; n > 0; i++)
	{
		fscanf(fp,"%d",&n);
		npres = 2 * n;		
		for(j = 0; j < npres; j++)
		{
			fscanf(fp, "%d", &presentes[j]);			
		}		
		
		if(n != 0)
		{
			maiscaro = funcmaiscaro(presentes, npres);
			maisbarato = funcmaisbarato(presentes, npres);
			printf("%d  %d\n", maiscaro, maisbarato);
		}		
	}
	return 0;
}
