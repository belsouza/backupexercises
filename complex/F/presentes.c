#include <stdio.h>


void mc(int *maiscaro, int *maisbarato, int *vet, int tam)
{
	int i, j, mc, mb;
	mc = vet[0] + vet[tam-1];
	mb = vet[(tam/2)-1] + vet[tam/2];
	
	*maiscaro = mc;
	*maisbarato = mb;	
}


int main(void)
{
	int i, j, n, num, npres, presentes[20], maiscaro = 0, maisbarato = 0;
	FILE *fp;
	fp = fopen("stdin.txt","r");
	
	do
	{
		fscanf(fp,"%d",&n);
		npres = 2 * n;		
		for(j = 0; j < npres; j++)
		{
			fscanf(fp, "%d", &presentes[j]);			
		}
		
		mc(&maiscaro, &maisbarato, presentes, npres);		
		
		if(n != 0)
		{
			printf("%d   %d\n", maiscaro, maisbarato);
		}
		
	}
	while(n > 0);
	return 0;
}
