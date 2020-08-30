#include <stdio.h>

void namefile( char *nomedoarquivo )
{
	printf("\nNome do arquivo: (com a extensao): ");
	gets(nomedoarquivo);	
}

int filecounter()
{
	int cont = 0;
	FILE *fp;
	char nomedoarquivo[30];
	namefile(nomedoarquivo);
	
	fp = fopen(nomedoarquivo,"r+");
	if(!fp)
	{
		printf("Erro na abertura do arquivo. ");
		exit(1);
	}
	
	while(!feof(fp))
	{
		cont += 1;
	}
	
	return cont;
}

int main(void)
{
	int num;
	num = filecounter();
	printf("%d", num);
}
