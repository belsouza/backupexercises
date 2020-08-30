#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void reset( int pontos[], int salgols[],  int golsfeitos[], int golsconv[],  int bloco )
{
	int i;
	for(i = 0; i < bloco; i++)
	{
		pontos[i] = salgols[i] = golsfeitos[i] = golsconv[i] = 0;
	}
}


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

void preliminares( int pontos[], int salgols[],  int golsfeitos[], int golsconv[],  int bloco)
{
	int i, j, pts1, pts2, t1, t2;
	srand(time(NULL));	
	for( i = 0; i < 4; i++ )
	{
		for(j = 1; (j < 4) && ( i != j); j++)
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


void ehmaior( int v[], int *nmaior, int *maior, int *repet )
{
	int i, temp, umaior = 0, cont = 0;
	
	//checa quem é o maior
	for( i = 0; i < 4; i++ )
	{
		if (v[i] > umaior)
		{
			umaior = v[i];
			temp = i;
		}
	}
	
	//ve quantas vezes ele aparece
	for( i = 0; i < 4; i++ )
	{
		if( v[i] == umaior)
		{
			cont++;
		}
	}
	
	*maior = temp;
	*repet = cont;
	*nmaior = umaior;	
}

void comparasaldo( int pts[], int saldo[], int *nmaior, int *imaior, int *cont)
{
     int i, j, smaior = 0, rep = 0, indexmaior = 0, ccont;
    
     
	 for( i = 0; i < *cont; i++)
	 {
	 	if(saldo[i] < smaior)
	 	{
	 		smaior = saldo[i];
		}
	 }
	 
	 for(i = 0; i < *cont; i++)	
	 {		
		if ((pts[i] == *nmaior) && (saldo[i] == smaior ) )
		{
			printf("\n%d", i);
			rep++;
		}
	 }
	 
	 *cont = rep;
}

