//
#define TAM 32
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

void criaarquivo( int v[], int tam )
{
	int i;
	FILE *fp;
	fp = fopen("data.txt", "w+");
	if(!fp)
	{
		printf("Erro de abertura do arquivo");
		exit(1);
	}
	
	for(i = 0; i < TAM; i++ )
	{
		fprintf(fp, "%5d", v[i]);
	}
	fclose(fp);
}


void lelinhaarquivo( int v[], int tam, int linha )
{
	int i, linha;
	int vetor[TAM];
	reset(vetor);	
	FILE *fp;
	fp = fopen("data.txt", "r+");
	if(!fp)
	{
		printf("Erro de abertura do arquivo");
		exit(1);
	}
	
	 while(fgets(linha, TAM, fp) != NULL) {
    	/* note como não precisamos especificar uma nova linha, o fgets já a inclui na string linha quando a encontra */
        printf("%d", linha);
    }
}
	
	fclose(fp);
}


int ehomaior( int v[], int size, int *quantrep )
{
	int i, maior = 0, cont = 0;
	// Ver quem é o maior
	for(i = 0; i< size; i++)
	{
		if(v[i] < maior)
		{
			maior = v[i];
		}
	}
	//Ver se tem repetido
	for(i = 0; i< size; i++)
	{
		if(v[i] == maior)
		{
			cont++;
		}
	}
	
	return maior;	
}

void verposicao( int maior, int vet[] )
{
	
}



//Ela processa e exibe quais sao os vencedores de cada bloco
void verificavencedor(int pontos[], int saldodegols[], int golsconvertidos[], int golssofridos[], int tam, int k)
{
	 int i, j, maior = 0, quantrep = 0;
	 for(i = 0; i < 4; i++)
	 {
	 	for( j = 0; j < 4; j++)
	 	{
	 		maior = ehomaior( pontos, 4, &quantrep);
		}
	 }
	 
	 verposicao( maior, pontos );
}




int main(void)
{
	int i, k, tam = 32, ngroups = 8, size;
	
	int pontos[tam];	
	int pontosgenericos[32] = {10, 2, 5, 7, 9, 12, 11, 11, 3, 6, 1, 1, 3, 5, 10, 7 ,8, 9, 11, 4, 6, 6, 5, 8, 3, 4, 5, 10, 2, 10, 11, 3};
	int saldodegols[tam];
	int golsconvertidos[tam];
	int golssofridos[tam];
	
	
	size = tam / ngroups;
	reset(pontos, tam);
	reset(saldodegols, tam);
	reset(golsconvertidos, tam );
	reset( golssofridos, tam);
	criaarquivo(pontosgenericos, 32);
	lelinhaarquivo( )
	
	k = 0;	
	while(k < 32)
	{
		campeonato(pontos, saldodegols, golsconvertidos, golssofridos, tam, k);				
	    k = k + 4;
	}
	
	for(i = 0; i < 8; i+=4)
	{
		verificavencedor(pontosgenericos, saldodegols, golsconvertidos, golssofridos, tam, i);	
	}
	
	//printf("\n**********************************\n");
	//exibir( pontos, tam );
		
}

