//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

//Exibe na tela o resultado do placar
void exibirplacar( int indiceA, int golsA, int golsB, int indiceB )
{
	printf("\n| Time %2d | %2d x %2d | Time: %2d |", indiceA, golsA, golsB, indiceB );
}

//funçao que serve para atribuir os valores de cada vetor.
void campeonato( int pontos[], int sg[], int gf[], int gs[], int size, int k ) 
{
	int i, j, ntam;	
	int placari, placarj, gfi, gfj, sgi, sgj;
	
	//Se criar uma função, os numeros saem iguais. A atribuição de valores deve ser feita em tempo real.
	srand(time(NULL));	 
	
	printf("\n\nGrupo %d\n", k/4);	      			
	for(i = 0; i < 4; i++)			
	{		
				
	   for(j = 0; j < 4; j++)
		{
			
		 	if( ( i != j ) && (i > j)  )
		 	{
		 		gfi = rand()%10; //golsfeitos time i
		 		gfj = rand()%10;  //gols feitos time j
		 			
		 		//Exibição do placar do campeonato.
		 		exibirplacar( k+j, gfj, gfi, k+i );
		 				 			
				//Saldo de gols durante o jogo	= diferenca entre entre os gols de cada time					 			
		 		sgi = gfi - gfj;
		 		sgj = gfj - gfi;
		 			
				 //O saldo de gols e atribuido para cada time		 			 			
		 		sg[i + k] += sgi;
		 		sg[j + k] += sgj;
		 			
		 		//O gols sofridos correspondem aos gols feitos pelo time adversário.
		 		gf[i + k] += gfi;
		 		gs[i + k] += gfj;
		 			
		 		//O gols sofridos correspondem aos gols feitos pelo time adversário.
		 		gf[j + k] += gfj;
		 		gs[j + k] += gfi;
		 			
		 		//Se é empate	
		 		if(gfi == gfj)
		 		{
		 			pontos[i + k] += 1;
		 			pontos[j + k] += 1;
				}
				
				//Se os gols de i são maiores, indice i ganha 3 pontos	
				if(gfi > gfj)
				{
					pontos[i + k] += 3;
				}
				//Senão, o indice j ganha 3 pontos				
				else
				{
					pontos[j + k] += 3;
				}
		 			
			}
		 		
		}	
					
	}	
		
}

//Ela processa e exibe quais sao os vencedores de cada bloco
void verificavencedor(int pontos[], int saldodegols[], int golsconvertidos[], int golssofridos[], int tam, int k)
{
	 int i, j;
	 for(i = 0; i < tam; i++)
	 {
	 	for(j = 0; j < tam; j++)
	 	{
	 			 		
	 		
		}
	 }
}


int main(void)
{
	int i, k, tam = 32, ngroups = 8, size;
		
	int pontos[tam];
	int saldodegols[tam];
	int golsconvertidos[tam];
	int golssofridos[tam];
	
	size = tam / ngroups;
	reset(pontos, tam);
	reset(saldodegols, tam);
	reset(golsconvertidos, tam );
	reset( golssofridos, tam);
	
	k = 0;	
	while(k < 32)
	{
		campeonato(pontos, saldodegols, golsconvertidos, golssofridos, tam, k);
		verificavencedor(pontos, saldodegols, golsconvertidos, golssofridos, tam, k);				
	    k = k + 4;
	}
	
	printf("\n**********************************\n");
	exibir( pontos, tam );
		
}

