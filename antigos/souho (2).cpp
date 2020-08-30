#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIM 4
void pontuacao_grupo( int grupo[], int *numtimes) //*pontos 
{
	int i, j, lim;
	lim = *numtimes;	
			
	for(i = 0; i < lim; i++)
	{
		for(j = 0; j < lim; j++)
		{
			if(i != j) 
			{
				if(v[i] == v[j])
				{
					partida[i] += 1;
					partida[j] += 1;
				}
				
				if(v[i] > v[j])
				{
					partida[i] += 3;
				}
				else
				{
					partida[j] += 3;
				}					
			}
		}
	}	
	
}

int randomnum()
{
	int num;
	srand(time(NULL));
	num = rand()%100;
	return num;
}

//Mostra um vetor
void showvetor( int *v, int size )
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("%d ", v[i]);
	}
	printf("\n\n");
}

//convoca os times
void convocacao(int *t, int total, int *convocados) //Aloca as seleções de acordo com o numero delas
{
	int i;
	
    for(i = 0; (i < LIM) && (*convocados < total); i++)
    {    
    	t[i] = 0;		   	
	}
	
	showvetor( t, LIM );
	
	*convocados += i; 	
}

void resultado(int timeA, int golsA, int timeB, int golsB, int *v)
{
	if(golsA > golsB)
	{
		printf("\n\nTime %d: %d vs Time %d: %d; ", timeA, golsA, timeB, golsB);
		printf("\nVencedor: Time %d, com %d gols!", timeA, golsA);
		*(v + timeA)+=3;	
		printf("\n*******\n");
	}
	else
	{
		if(golsB > golsA)
		{
			printf("\n\nTime %d: %d vs Time %d: %d; ", timeA, golsA, timeB, golsB);
			printf("\nVencedor: Time %d, com %d gols!", timeB, golsB);
		    *(v + timeB)+=3;
		    printf("\n*******\n");
		}	
		
		else
		{
			printf("\n\nTime %d: %d vs Time %d: %d; ", timeA, golsA, timeB, golsB);
			printf("\nEmpate dos dois times %d e %d com %d gols!", timeA, timeB, golsA);
			*(v + timeB)+=1;
			*(v + timeA)+=1;
			printf("\n*******\n");
		}
	}	
}

//Jogos dos grupos

void partidas(int *grupo, int tam)
{
	int i, j;
	int golsA, golsB;
	
	srand(time(NULL));
	for(i = 0; i < tam; i++)
	{
		for(j = 0; (j < tam) && (j != i); j++)
		{
			golsA = rand()/10000;
			golsB = rand()/10000;
			resultado(i, golsA , j, golsB, grupo);
		}
	}
}




int main(void)
{
	int i, j;
	int totaltimes = 32, convocados = 0, ngrupos = 8;
	int sizegrupo = totaltimes / ngrupos;
		
	int g1[totaltimes/8]; //g1
	int g2[totaltimes/8]; //g2
	int g3[totaltimes/8]; //g3
	int g4[totaltimes/8]; //g4
	int g5[totaltimes/8]; //g5
	int g6[totaltimes/8]; //g6
	int g7[totaltimes/8]; //g7
	int g8[totaltimes/8]; //g8
	
	convocacao(g1, 32, &convocados);
	convocacao(g2, 32, &convocados);
	convocacao(g3, 32, &convocados);
	convocacao(g4, 32, &convocados);
	convocacao(g5, 32, &convocados);
	convocacao(g6, 32, &convocados);
	convocacao(g7, 32, &convocados);
	convocacao(g8, 32, &convocados);
	
	//printf("%d\n", convocados);
	
	partidas(g1, sizegrupo);
	printf("\n*************************************\n");
	showvetor(g1, LIM);	
}
