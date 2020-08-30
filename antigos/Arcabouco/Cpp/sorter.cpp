#include <iostream>
#define TAM 10

using namespace std;

class Sorter
{
	private:
		
		
		
	public:
		
		void burp_sort( int vet[] )
		{
			int i, j, ordenados = 0, numeros = 0, temp, nop = 0;
						
			do
			{
				for(i = 0; i < 10; i++)
				{
					if(vet[i] > vet[i+1])
					{
						temp = vet[i];
						vet[i] = vet[i+1];
						vet[i+1] = temp;
						ordenados = 0;
						nop++;
					}
					else
					{
						ordenados = ordenados + 1;
					}			
				}
			}
			while(ordenados < 10);			
			printf("\nNumero de operacoes: %d\n", nop);	
		}
		
		void bubblesort( int vet[] )
		{
			int i, j, temp, nop = 0;
			for(i = 0; i < TAM; i++)
			{		
				for(j = 0; j < TAM; j++)
				{
					if(vet[j] > vet[j+1])
					{
						temp = vet[j];
						vet[j] = vet[j+1];
						vet[j+1] = temp;
						nop++;
					}
				}		
			}
			printf("\nNumero de operacoes: %d\n", nop);				
		}
		
				
		void exibe( int vet[] )
		{
			int i;
			for(i = 0; i < TAM; i++)
			{
				printf("%d ", vet[i]);
			}
			
			printf("\n");
		}
};

int main(void)
{	
	int num[TAM] = { 9, 55, 87, 1, 665, 3, 55, 98, 25, 0};
	Sorter p;
	p.exibe(num);
	p.bubblesort(num);
	p.exibe(num);
	
	
	
	return 0;
}
