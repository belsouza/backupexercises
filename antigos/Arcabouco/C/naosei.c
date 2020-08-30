#include <stdio.h>

int r = 5;
int cont = 1;
int vet[5][5];

void populate()
{
	int i, j, k, l, m, n, ix, in;
	i = j = (r / 2);
	ix = 1;
	while(cont <= r*r)
	{
					
		for(k = 0; k < ix; k++)
		{
			if(i >= 0 && j >= 0 && i < r && j < r){
				vet[i][j] = cont;
				printf("%d %d - %d\n", i, j, cont);
				cont++;
				j = j + 1;
			}			
		}
		
		for(l = 0; l < ix; l++)
		{
			if(i >= 0 && j >= 0 && i < r && j < r){
			vet[i][j] = cont;
			printf("%d %d - %d\n", i, j, cont);
			cont++;
			i = i + 1;
			}
		}
			
		ix += 1;	
		
		
		for(m = 0; m < ix; m++)
		{
			if(i >= 0 && j >= 0 && i < r && j < r){
			vet[i][j] = cont;
			printf("%d %d - %d\n", i, j, cont);
			cont++;
			j = j - 1;
			}			
		}
		
		for(n = 0; n < ix; n++){
			
			if(i >= 0 && j >= 0 && i < r && j < r){			
			vet[i][j] = cont;
			printf("%d %d - %d\n", i, j, cont);
			cont++;
			i = i - 1;
			}
			
		}
		
		ix++;		
	}						
}

void exibirmatriz()
{
	int i, j;
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < r; j++)
		{
			printf("%2d ", vet[i][j]);
		}
		printf("\n");
	}
}
		
	
int main(void)
{
	populate();
	exibirmatriz();
	
	return 0;
}
