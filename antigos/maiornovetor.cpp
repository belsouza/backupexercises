#include <stdio.h>



int maiornovetor(int v[], int size, int start )
{
	int i, j, maior = 0, num = 0;
	
	for(j = start; j < ((size + start)); j++)
	{
		if(v[j] > maior )
		{
			maior = v[j];
		}
	}	
	return maior;
}


int main(void)
{
	int i, j, num1;
	int vet[32] = {44, 2, 5, 7, 9, 12, 11, 11, 3, 6, 1, 1, 3, 5, 15, 7 ,8, 9, 11, 4, 6, 6, 5, 8, 3, 4, 5, 10, 2, 10, 11, 33};
	
	num1 = maiornovetor( vet, 32, 0 );
	printf("%d", num1);
	
}
