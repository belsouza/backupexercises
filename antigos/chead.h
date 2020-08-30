#include<stdio.h>
#include <stdlib.h>
#include <time.h>

//Cria o vetor de pontos
void pontuacao( int t1, int t2, int pts1, int pts2, int v[] )
{
	if(pts1 == pts2)
	{
		v[t1] += 1;
		v[t2] += 1;
	}	
	if(pts1 > pts2)
	{
		v[t1] += 3;
	}
	else
	{
		v[t2] += 3;
	}
	
}

void preliminares(int pontos[], int salgols[],  int golsfeitos[], int golsconv[])
{
	int i, j, pts1, pts2, t1, t2, bloco = 0;
	srand(time(NULL));	
	for( i = 0; i < 4; i++ )
	{
		for(j = 0; (j < 4) && ( i != j); j++)
		{
			pts1 = rand()%10; //index i
			pts2 = rand()%10; //index j
			t1 = i + bloco;
			t2 = j + bloco;
			
			printf("\n| Jogo %2d | %2d x %2d | Jogo %2d |", t1, pts1, pts2, t2);			
			
			pontuacao(t1, t2, pts1, pts2, pontos);
			salgols[t1] = pts1 - pts2;
			salgols[t2] = pts2 - pts1;
			golsfeitos[t1] += pts1;
			golsfeitos[t2] += pts2;
			golsconv[t1] += pts2;
			golsconv[t2] += pts1; 			
			
		}		
	}
	printf("\n");
}

