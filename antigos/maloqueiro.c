#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	FILE *fp;
	char nomedoarquivo[40];
	
	//vetor = (char*)malloc(50 * sizeof(char));
	
	
	printf("Entre com o nome do arquivo a ser aberto.");
	gets(nomedoarquivo);
	strcat(nomedoarqui)
	
	fp = fopen(nomedoarquivo, "w+");
	if(fp == NULL)
	{
		printf("Erro na criacao do arquivo. A execucao sera abortada");
		exit(1);
	}
	
	for(i = 0; i < num; i++)
	{
		printf("\n%d: ", i);
		for(j = 0; j < MAX; j++)
		{
			fscanf(fp,"%d", &vetor[j] );
		}
		
	}
	
}
