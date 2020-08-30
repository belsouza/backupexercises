//Bubble sort
#include <stdio.h>

void exibir(int vet[])
{
	int i;
	for(i=0; i < 10; i++)
	{
		printf("%d ", vet[i]);
	}
	printf("\n");
}



int main(void)
{
	int i, j, nop = 0, ind, tam, temp, menor=9999;	
	int vet[10] = {2, 88, 23, 12, 366, 8, 36, 49, 121, 0};	
	
	exibir(vet);
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if(vet[j] < menor)
			{
				menor = vet[j];
				ind = j;
			}
		}
		
		if(vet[i] > vet[ind])
		{
			temp = vet[i];
			vet[i] = vet[ind];
			vet[ind] = temp;
		}
	}	
	
	exibir(vet);
	return 0;
}
