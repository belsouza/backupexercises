#include <stdio.h>

int k = 0;
int vet[16];

void aux_reset()
{
	int i;
	for(i = 0; i < 16; i++)
	{
		vet[i] = -1;
	}
}

void aux_show( int vet[] )
{
	int i, j;	
	
	for(i = 16; i >= 0; i--)
	{
		if((vet[i] == 0) || (vet[i] == 1))
		{
			printf("%d ", vet[i]);
		}			
	}
}

int binario(int num)
{
	int aux;
	if(num > 0)
	{
		aux = num % 2;
		//printf("%d ", aux);
		vet[k] = aux;
		k++;		
		return binario(num / 2);
	}
	else
	{
		return 1;
	}
}

int main(void)
{
	int num, bin;
	scanf("%d", &num);
	aux_reset();
	bin = binario(num);
	aux_show(vet);
	return 0;
}
