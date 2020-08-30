#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void reset( int vet[], int tam )
{
	int i;
	for(i = 0; i < tam; i++)
	{
		vet[i] = 0;
	}	
}

void exibir( int vet[], int tam )
{
	int i;
	for(i = 0; i < tam; i++)
	{
		printf("%d ", vet[i]);
	}	
}

void placar( int v[], int index, int timei, int timej )
{
	int k, gfi, gfj;
	srand(time(NULL));
	
	//index e o i da principal, que desloca o ponteiro na memoria
	for(k = 0; k < 4; k++)
	{
		v[index + k] = 4*timei;
	}
}


int main()
{
    int i, j, k, gfi, gfj, sgi, sgj, maior = 0;
    int saldodegols[32];
    int pontos[32];
    int golsfeitos[32];
    int golssofridos[32];
    
    
    srand(time(NULL));
     
    for(i = 0; i < 32; i++)
    {
     	saldodegols[i] = 0;//rand()%10; 
     	golsfeitos[i] = 0;
     	golssofridos[i] = 0;
		pontos[i] = 0;    	
	}
	
	k = 0;
	
	while( k < 32 )
	{   
	    printf("\n\nGrupo %d\n", k/4);
		for(i = 0; i < 4; i++)
		{
			
		    for(j = 0; j < 4; j++)
		 	{
		 		if( ( i != j ) && (i > j)  )
		 		{
		 			gfi = rand()%10;
		 			gfj = rand()%10;
		 			printf("\n| Jogo %2d | %2d x %2d | Jogo: %2d |", k+j, gfj, gfi, k+i  );
		 				 			
		 			sgi = gfi - gfj;
		 			sgj = gfj - gfi;
		 			
		 			saldodegols[i + k] += sgi;
		 			saldodegols[j + k] += sgj;
		 			
		 			golsfeitos[i + k] += gfi;
		 			golssofridos[i + k] += gfj;
		 			
		 			golsfeitos[j + k] += gfj;
		 			golssofridos[j + k] += gfi;
		 			
		 			
		 			if(gfi == gfj)
		 			{
		 				pontos[i + k] += 1;
		 				pontos[j + k] += 1;
					}
					
					if(gfi > gfj)
					{
						pontos[i + k] += 3;
					}				
					else
					{
						pontos[j + k] += 3;
					}
		 			
				}
		 		
			}			
		}		
		k+= 4;
	}
	
		 
	 	
}










