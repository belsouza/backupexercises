#include <stdio.h>

// Mostra a posicao de uma eventual repeticao
void repeticao(int v[], int size, int start )
{
	int i, j, tam, cont = 0, index1 = 0, index2 = 0;
	
    tam = (start + size);
    
    for(i = start; i < tam; i++)
    {
    	j = (start + 1);
    	
    	while( (j < tam ) && (i != j ))
    	{
    		if(v[j] == v[i] && (cont == 0))
    		{
    			index1 = j;
    			index2 = i;
				cont++;	
			}    	    	 	
		 	j++;
    	}  
	}
	
	printf("Ha repeticao nos index %d e %d", index1, index2);
	
	
	
}


int main(void)
{
	int i, j, num1, num2;
	int vet[32] = {10, 2, 5, 7, 9, 12, 11, 11, 3, 6, 1, 3, 1, 5, 10, 7 ,8, 9, 11, 4, 6, 6, 5, 8, 3, 4, 5, 10, 2, 10, 11, 3};
	repeticao( vet, 4, 18 );
	
	
	
	printf("\n\n");
	for(i = 0; i < 32; i++)
	{
		printf("%d ", vet[i]);
	}
	
}
