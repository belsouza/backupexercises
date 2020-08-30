#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//criar vetor com n elementos variando entre a e -1

int gerarnumero()
{
	return rand()%10;
}


void seedrune( char *namefile, int n, int a )
{
	FILE *fp;
	int i, j, num, temp = 0;
	srand(time(NULL));
	
	strcat(namefile,".txt");	
	fp = fopen(namefile,"w+");
	
	if(!fp)
	{
		printf("Erro na criacao do arquivo. A aplicacao sera encerrada.");
		exit(1);
	}
			
	while(n > 0)
	{
		for(i=0; i < a; i++)
		{
			num = gerarnumero();
			if ((num > -1)&&(num < a) )
			{
				temp = num;
			}
			else
			{
				temp = gerarnumero();
			}
			fprintf(fp,"%d ", temp);
			n-=1;
		}
		fprintf(fp,"\n");
	}
	printf("Arquivo criado com sucesso.");	
	fclose(fp);
	
}

int main(void)
{
	char namefile[100];
	int a, n, i;
	printf("Entre com o nome do arquivo:");
	scanf("%s", namefile);
	printf("Entre com o valor da amplitude:");
	scanf("%d", &a);
	printf("Entre com a quantidade de elementos:");
	scanf("%d", &n);
	seedrune(namefile, n , a);
}
