#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


typedef struct data
{
	int dia;
	int mes;
	int ano;
}Tdata;

typedef struct tipocpf
{
	int base;
	int digito;
} Tcpf;

typedef struct ficha
{
	char nome[40];
	Tcpf cpf;
	Tdata nasc;
	long long int telefone;
	char email[40];
	int status;
}Tficha[100];



//funcao menu inicial
void menu_inicial()
{
	int num;
	int status = 0;
	printf("\n1- Nova Agenda\n2- Inserir contato\n3- Listar Contatos\n4- Importar contatos de outra agenda\n5- Excluir contato\n6- Excluir agenda\n6- Sair\n\nOpcao: ");	
	while (status == 0)
	{
		fflush(stdin);
		scanf("%d", &num);	
		
		if(num >= 1 && num <= 7)
		{
			switch(num)
			{
				case 1:
					printf("\n1: Nova agenda");
					novo_arquivo();
					status = 1;
					break;
					
				case 2:
					printf("\n2: Inserir contato");
					status = 1;
					break;
					
				case 3:
					printf("\n3: Listar Contatos");
					readfile();
					status = 1;
					break;
					
				case 4:
					printf("\n4: Importar contatos de outra agenda");
					status = 1;
					break;
					
				case 5:
					printf("\n5: Excluir contato");
					status = 1;
					break;
					
				case 6:
					printf("\n6: Excluir agenda");
					deletarArquivo();
					status = 1;
					break;
					
				case 7:
					printf("\n7: Sair");
					printf("\nVoce escolheu sair.\nA aplicacao sera encerrada.\n\n");
					status = 1;
					break;
					
				default:
					printf("Opcao nao reconhecida. Tente de novo");
					
			}
		}
		
		else
		{
			printf("\nOps! Opcao nao reconhecida! Tente de novo! \nEscolha uma opcao, de 1 a 5: \n\n1- Nova Agenda\n2- Atualizar Agenda\n3- Ler Agenda\n4- Importar Agenda\n5- Excluir Agenda\n\nOpcao:");
		}
	}	
}
//funcao le arquivo

void readfile()
{
	FILE *fp;
	Tficha registro;
	char nomedoarquivo[30];
	int num, i;
	int smenu = 0, val;
	
	printf("\nAgenda a ser aberta: ");
	fflush(stdin);	
	gets(nomedoarquivo);
	
	fp = fopen(nomedoarquivo, "r");
	if(!fp)
	{
		printf("Erro de criacao do arquivo! A operacao sera encerrada.");
		exit(1);
	}	
	
	system("cls");
	i = 0;
	while(!feof(fp))
	{
		if(i == 0)
		{
			fscanf(fp, "%d", &num);					
		}
		else
		{			
			fscanf(fp, " %[^\n]s*c", &registro[i].nome );
			fscanf(fp, "%d %d", &registro[i].cpf.base, &registro[i].cpf.digito );
			fscanf(fp, "%d  %d  %d", &registro[i].nasc.dia, &registro[i].nasc.mes, &registro[i].nasc.ano );
			fscanf(fp, "%lli", &registro[i].telefone );
			fscanf(fp, "%s", &registro[i].email );
			fscanf(fp, "%d\n", &registro[i].status );
			
			
			printf("\nRegistro: %d\n", i);
			printf("Nome: %s\n", registro[i].nome);
			printf("CPF: %d %d\n",registro[i].cpf.base, registro[i].cpf.digito );
			printf("Data de Nascimento: %d  %d  %d\n", registro[i].nasc.dia, registro[i].nasc.mes, registro[i].nasc.ano );
			printf("Telefone: %d\n", registro[i].telefone );
			printf("Email: %s\n", registro[i].email );
			printf("Status: %d\n\n", registro[i].status );	
		}				
		i++;	
	}
	
	printf("\n\n*********************  %d registros na agenda   ***********************\n\n", num);
	
	while(smenu == 0)
	{
		printf("Escolha uma opcao: \n1- Voltar para o menu inicial \n2- Encerrar a aplicacao: \nOpcao: ");
		fflush(stdin);
		val = getchar();
		
		switch(val)
		{
			case 49:
				system("cls");
				menu_inicial();					
				smenu = 1;
				break;
				
			case 50:					
				smenu = 1;
				break;
				
			default:
				printf("\nOpcao nao reconhecida. Tente de novo: \n1- Voltar para o menu inicial \n2- Encerrar a aplicacao: \nOpcao:");
		}
	}
		
	fclose(fp);	
}			
	
//Funcão verifica se arquivo existe	- subordinada a todas as funcoes
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

//Funcão cria um arquivo -  subordinada a funcao novo_arquivo
void gera_arquivo( char *nomedoarquivo )
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
					printf("\nVoce escolheu deixar para adicionar registros depois.\nVoltar para o menu inicial.\n\n");
					fclose(fp);
					menu_inicial();
					status = true;
					break;
					
					
				default:
					printf("\nOps! Operacao nao reconhecida. Tente de novo!\nDeseja adicionar registros agora?\n 1- Sim\n 2- Nao\n Opcao: ");
			}
		}
		
	}
}

//Função independente novo arquivo - cria um novo arquivo
void novo_arquivo()
{	
	bool status = false;
	int option;
	char nomedoarquivo[20];
	printf("\nDigite o nome da agenda a ser criada(com a extensao): ");
	
	fflush(stdin);
	gets(nomedoarquivo);
	if (arquivo_existente( nomedoarquivo ) == 1)
	{
		printf("\nO arquivo ja existe. Deseja abri-lo ou sobrescreve-lo?\n\n 1- Abrir existente\n 2- Sobrescrever agenda(novo)\n 3- Voltar para o menu inicial\n\n Opcao: ");
		while(status == false)
		{
			fflush(stdin);
			scanf("%d", &option);
			switch(option)
			{
				case 1:
					
					printf("\n********** Agenda %s **********\n", nomedoarquivo);
					//abrir arquivo
					status = true;
					break;
					
				case 2:
					printf("\n********** Agenda %s **********\n", nomedoarquivo);
					gera_arquivo(nomedoarquivo);
					status = true;
					break;
					
				case 3:
					menu_inicial();
					status = true;
					break;
					
				default:
					printf("\nOpcao nao reconhecida. Tente de novo!\nDeseja abrir ou sobrescrever o arquivo?\n\n 1- Abrir existente\n 2- Sobrescrever agenda(novo)\n 3- Voltar para o menu inicial\n\n Opcao:");
			}
		}
		
	}
	else
	{
		gera_arquivo(nomedoarquivo);
	}	
}

void deletarArquivo()
{
	char nomedoarquivo[20];
	printf("\nEntre com o nome do arquivo a ser removido: ");
	fflush(stdin);
	scanf("%s", nomedoarquivo);
	
	if( remove(nomedoarquivo) == 0 );
	{
		printf("\nAgenda excluida com sucesso.");
	}
	else
	{
		printf("\nErro. A aplicacao nao pode apagar a agenda selecionada.");
	}	
}

// Formatação do CPF
void cpfground( int *base, int *digito )
{
	int status = 0, i = 1;
	int c = 0, temp;
	*digito = *base = 0;
	
	while((c != 13) && (i <= 11))
	{
		c = getch();
		putchar(c);
		temp = (c) - '0';
		
		//variaveis
		if(i <= 9)
		{
			if(i == 0)
			{
				*base = *base + temp; //primeiro digito - unidade
			}
			else
			{
				*base = (*base * 10) + temp; //os outros digitos sao multiplos de 10: dezena, centenas, etc.
			}
		}
		else
		{
			if(i == 10)
			{
				*digito = *digito + temp; //primeiro digito - unidade
			}
			else
			{
				*digito = (*digito * 10) + temp; //os outros digitos sao multiplos de 10: dezena, centenas, etc.
			}
		}
		
		//fim variaveis
		
		//Pontos
		if((i%3 == 0) && (i < 9))
		{
			putchar('.');
		}
		if((i%3 == 0) && (i >= 9))
		{
			putchar('-');
		}
		//Fim pontos	
		i++;	
	}
}


// Void no final mesmo
int main(void)
{
	printf("Agenda Super Cool\nPara comecar, escolha uma opcao, de 1 a 7: \n\n");	
	menu_inicial();	
}



