#include <stdio.h>

void sorting(int v[], int size, int start )
{
	int i, j, cont = 0, num = 0;
	for(i = 0; i < size; i++)
	{
		for(j = start; j < ((size + start) - 1); j++)
		{
			if(v[j] > v[j+1])
			{
				num = v[j];
				v[j] = v[j + 1];
				v[j + 1] = num;
			}
		}
	}
}


int main(void)
{
	int i, j, num1, num2;
	int vet[32] = {10, 2, 5, 7, 9, 12, 11, 11, 3, 6, 1, 1, 3, 5, 10, 7 ,8, 9, 11, 4, 6, 6, 5, 8, 3, 4, 5, 10, 2, 10, 11, 3};
	sorting( vet, 4, 0 );
	
	for(i = 0; i < 32; i++)
	{
		printf("%d ", vet[i]);
	}
	
}
