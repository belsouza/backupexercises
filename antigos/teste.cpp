#include <stdio.h>
#include <iostream>

void exibir( int v[], int tam)
{
	int i;
	for(i = 0; i < tam; i++)
	{
		
		std::cout << " " << v[i];
	}
}

void sortingcrescent( int v[], int tam, int p)
{
	int i, j;

}

int main(void)
{
	int vet[32] = {10, 2, 5, 7, 9, 12, 11, 11, 3, 6, 1, 1, 3, 5, 10, 7 ,8, 9, 11, 4, 6, 6, 5, 8, 3, 4, 5, 10, 2, 10, 11, 3};
	sortingcrescent( vet, 4, 4 );
	
}
