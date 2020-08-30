#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void resetvet( int vet[], int tam )
{
	int i;
	for(i = 0; i < tam; i++)
	{
		vet[i] = 0;
	}	
}

void printVet( int vet[], int tam )
{
	int i;
	for(i = 0; i < tam; i++)
	{
		printf("%d ", vet[i]);
	}
	
	printf("****\n\n");
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
    int i, j, k, gfi, gfj, sgi, sgj;
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
		for(i = 0; i < 4; i++)
		{
		    for(j = 0; j < 4; j++)
		 	{
		 		if( ( i != j ) && (i > j)  )
		 		{
		 			gfi = rand()%10;
		 			gfj = rand()%10;
		 			printf("\nJogo: %d vs %d, placar: %d x %d ", j, i, gfj, gfi);
		 			
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
	 /*
	for(i = 0; i < 4; i++)
	{
	    for(j = 0; j < 4; j++)
	 	{
	 		if( ( i != j ) && (i > j)  )
	 		{
	 			gfi = rand()%10;
	 			gfj = rand()%10;
	 			printf("\nJogo: %d vs %d, placar: %d x %d ", j, i, gfj, gfi);
	 			
	 			sgi = gfi - gfj;
	 			sgj = gfj - gfi;
	 			
	 			saldodegols[i] += sgi;
	 			saldodegols[j] += sgj;
	 			
	 			golsfeitos[i] += gfi;
	 			golssofridos[i] += gfj;
	 			
	 			golsfeitos[j] += gfj;
	 			golssofridos[j] += gfi;
	 			
	 			
	 			if(gfi == gfj)
	 			{
	 				pontos[i] += 1;
	 				pontos[j] += 1;
				}
				
				if(gfi > gfj)
				{
					pontos[i] += 3;
				}				
				else
				{
					pontos[j] += 3;
				}
	 			
			}
	 		
		}
	}
	*/
	
   printf("****\n\n");
   printVet( golsfeitos, 32);
     
     
	
}










