#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define BLOCO 4

//Mostra qual o maior algarismo em um vetor
int omaior( int v[] )
{
	int i, maior = 0;
	
	for(i = 0; i < BLOCO; i++)
	{
		if(v[i] > maior )
		{
			maior = v[i];					
		}
	}
	return maior;
}

//Mostra o segundo maior algorismo no vetor. O maior tem que ser declarado...
int segundomaior( int v[], int maiorum )
{
	int i, smaior = 0;
	
	for(i = 0; i < BLOCO; i++)
	{
		if( (v[i] > smaior) && (v[i] != maiorum) )
		{
			smaior = v[i];					
		}
	}
	return smaior;
}


//Mostra o maior dentre um vetor e conta as repeticoes do mesmo dentro do vetor

int resultado( int v[] )
{
	int i, maior, cont = 0, res = 0, index;
	maior = omaior( v );
	
	for(i = 0; i < BLOCO; i++)
	{
		if(maior == v[i])
		{
			index = i;
			cont++;
		}
	}	
			
	if(cont == 1)
	{
		return index;
	}
	else
	{
		return 0;
	}	
}

//Verifica quem é o segundo maior e quantas são as ocorrências.

int resultadosegundolugar( int v[] )
{
	int i, maior, segundo, cont = 0, res = 0, index;
	maior = omaior( v );
	segundo = segundomaior( v, maior );
	
	for(i = 0; i < BLOCO; i++)
	{
		if(segundo == v[i])
		{
			index = i;
			cont++;
		}
	}	
			
	if(cont == 1)
	{
		return index;
	}
	else
	{
		return 0;
	}	
}

//Compara dois vetores para determinar o segundo lugar, alinhando seus indices

int comparasegundolugar(int p[], int q[])
{
	int i, pmaior, qmaior, indicemaior, cont = 0, maior1, maior2;
	
	maior1 = omaior( p );
	pmaior = segundomaior( p, maior1 );
	
	maior2 = omaior( q );
	qmaior = segundomaior( q, maior2 );
		
	for(i = 0; i < BLOCO; i++)
	{
		if( (p[i] == pmaior) && (q[i] == qmaior) )
		{
			indicemaior = i;
			cont++;
		}
	}
		
	if(cont == 1)
	{
		return indicemaior;
	}
	else
	{
		return 0;
	}
}

//Compara dois vetores para determinar o primeiro lugar, alinhando seus indices

int compara(int p[], int q[])
{
	int i, pmaior, qmaior, indicemaior, cont = 0;
	pmaior = omaior(p);
	qmaior = omaior(q);
	
	for(i = 0; i < BLOCO; i++)
	{
		if( (p[i] == pmaior) && (q[i] == qmaior) )
		{
			indicemaior = i;
			cont++;
		}
	}
		
	if(cont == 1)
	{
		return indicemaior;
	}
	else
	{
		return 0;
	}
}


//Função para determinar somente o primeiro lugar...

int primeirolugar( int p[], int q[], int r[], int s[] )
{
	int mpts;
	mpts = resultado(p);
    if(mpts != 0)
    {
    	return mpts;
    }
    else
    {
    	mpts = compara( p, q );
    	
    	if(mpts != 0)
    	{
    		return mpts;
		}
		else
		{
			mpts = compara( p, r );	
					
			if(mpts != 0)
			{
				return mpts;				
			}
		    
		    else
		    {
		    	mpts = compara( p, s );
		    	return mpts;
			}
		}
    	
	}    
}

//Função para determinar somente o segundo lugar...

int segundolugar( int p[], int q[], int r[], int s[] )
{
	int mpts;
	mpts = resultadosegundolugar(p);
    if(mpts != 0)
    {
    	return mpts;
    }
    else
    {
    	mpts = comparasegundolugar( p, q );
    	
    	if(mpts != 0)
    	{
    		return mpts;
		}
		else
		{
			mpts = comparasegundolugar( p, r );	
					
			if(mpts != 0)
			{
				return mpts;				
			}
		    
		    else
		    {
		    	mpts = comparasegundolugar( p, s );
		    	return mpts;
			}
		}
    	
	}    
}

//Cria o vetor de pontos - recebe o nome do time 1, time 2, numero de gols do time 1 e o numero de gols do time 2, e o vetor que recebe os pontos
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

//Essa função gera os gols de cada partida, calcula os pontos e atribui aos vetores correspondentes
//Poderia ter usado o scanf, mas demandaria muito tempo para testar um por um.

void preliminares(int pontos[], int salgols[],  int golsfeitos[], int golsconv[])
{
	int i, j, pts1, pts2, t1, t2, bloco = 0;
	srand(time(NULL));	
	for( i = 0; i < BLOCO; i++ )
	{
		for(j = 0; (j < BLOCO) && (i != j); j++)
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


//Funçao que reseta um vetor, atribundo 0 a todos os seus valores
void reset(int v[], int tam)
{
	int i;
	for(i = 0; i < tam; i++)
	{
		v[i] = 0;
	}	
}

//Funçao que exibe um vetor
void exibir( int vet[], int tam )
{
	int i;
	for(i = 0; i < tam; i++)
	{
		printf("%d ", vet[i]);
	}
	printf("\n\n");	
}

//Exibe os resultados do primeiro e segundo lugares, baseado nos vetores de origem
void mostraresultado( int pontos[], int salgols[], int  golsfeitos[], int golsconv[] , int index)
{
	int mpts, spts;
	mpts = 	primeirolugar( pontos, salgols, golsfeitos, golsconv );
	spts = segundolugar(  pontos, salgols, golsfeitos, golsconv );
	
	printf("\n\nPrimeiro lugar grupo: %d: time %d\n\n Segundo lugar grupo: %d, time %d\n\n", index, mpts, index, spts);	
}

int main(void)
{
	int i, mpts = 0, spts = 0;
	int pontos[32];
	int salgols[32];
	int golsfeitos[32];
	int golsconv[32];	
	int *p, *q, *r, *s;	
	
	p = &pontos[0];
	q = &salgols[0];
	r = &golsfeitos[0];
	s = &golsconv[0];
	
    reset( p, 32 );
    reset( q, 32 );
	reset( r, 32 );
	reset( s, 32 );
	
	for( i = 0; i < 32; i+= 4)
	{
		preliminares(p + i, q + i, r + i, s + i);
		mostraresultado( p + i, q + i, r + i, s + i, i);		
	}
	//exibir(p, 32);
	//exibir(q, 32);
	//exibir(r, 32);
    //exibir(s, 32);
  
}
