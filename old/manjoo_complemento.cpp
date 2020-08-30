#include <stdio.h>
#include <stdlib.h>

int arquivo_existente( char *nomedoarquivo )
{
	FILE *fp;
	if(fp = fopen(nomedoarquivo,"r") )
	{
		fclose(fp);
		return 1;
	}
	else
	{
		return 0;
	}
}

void gera_arquivo( char *nomedoarquivo  )
{
	FILE *fp;
	bool status = false;
	int cond;
	fp = fopen(nomedoarquivo,"w+");
	if(!fp)
	{
		printf("\nErro de criacao de arquivo. A operacao sera abortada.");
		exit(1);
	}
	else
	{
		printf("\n\nArquivo criado com sucesso. Deseja adicionar registros agora?\n 1- Sim\n 2- Nao\n Opcao: ");
		while(status == false)
		{
			fflush(stdin);
			scanf("%d", &cond);
			switch(cond)
			{
				case 1:
					printf("\nAdicionar novo registro: ");
					//Entrar funcao abrir arquivo atualizar e encerrar a instancia de novo
					status = true;
					break;
					
				case 2:
					printf("\nVoce escolheu deixar para adicionar registros depois.\nVoltar para o menu inicial.  ");
					fclose(fp);
					//menu_inicial();
					status = true;
					break;
					
					
				default:
					printf("\nOps! Operacao nao reconhecida. Tente de novo!\nDeseja adicionar registros agora?\n 1- Sim\n 2- Nao\n Opcao: ");
			}
		}
		
	}
}

void novo_arquivo()
{	
	bool status = false;
	int option;
	char nomedoarquivo[20];
	printf("\nDigite o nome da agenda a ser criada(com a extensao):");
	gets(nomedoarquivo);
	if (arquivo_existente( nomedoarquivo ) == 1)
	{
		printf("\nO arquivo ja existe. Deseja abri-lo ou sobrescreve-lo?\n\n 1- Abrir existente\n 2- Sobrescrever agenda(novo): ");
		while(status == false)
		{
			fflush(stdin);
			scanf("%d", &option);
			switch(option)
			{
				case 1:
					
					printf("\n**********Agenda %s **********\n", nomedoarquivo);
					//abrir arquivo
					status = true;
					break;
					
				case 2:
					printf("\n**********Agenda %s **********\n", nomedoarquivo);
					gera_arquivo(nomedoarquivo);
					status = true;
					break;
					
				default:
					printf("\nOpcao nao reconhecida. Tente de novo!\nDeseja abrir ou sobrescrever o arquivo?\n\n 1- Abrir existente\n 2- Sobrescrever agenda(novo):");
			}
		}
		
	}
	else
	{
		gera_arquivo(nomedoarquivo);
	}	
}

int main (void)
{
	novo_arquivo();
}
