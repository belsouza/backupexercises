#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct ficha{
	int index;
	int cod;	
	struct ficha *next;
	struct ficha *prev;
}TFicha;

int validafuncao( char opt ){
	
	char opcao;
	fflush(stdin);
	fscanf(stdin,"%c",&opcao);
	
	if(opcao == 'y'){
		return 0;
	}
	else if(opcao == 'n'){
		return 1;
	}
	else
	{
		printf("Opcao invalida. Entre com uma opcao: ");
		return validafuncao(opcao);
	}
}

void exibeTFicha( TFicha *foo )
{
	TFicha *un = foo;
	while(un != NULL){
		printf("\nIndex: %d\nID: %d\n\n", un->index, un->cod);
		un = un->next;
	}
	printf("\n");	
}

void funcexibirLista( TFicha **num  )
{
	TFicha *un = *num;
	printf("2 - Exibindo Lista");
	while(un != NULL)
	{
		printf("\nIndex: %d\nID: %d\n\n", un->index, un->cod);
		un = un->next;
	}
}


void liberaTFicha( TFicha *un )
{
	while(un != NULL){
		free(un);
		un = un->next;
	}	
}

void novaTFicha( TFicha **un , int i)
{
	if(*un == NULL)
	{
		srand(time(NULL));
		TFicha *n = (TFicha *) malloc(sizeof(TFicha));		
		n->index = i;
		n->cod = rand()%10000;	
		n->next = NULL;
		n->prev = NULL;
		*un = n;
	}
	else
	{
		srand(time(NULL));
		TFicha *aux = *un;
		TFicha *n = (TFicha *) malloc(sizeof(TFicha));		
		n->index = i;
		n->cod = rand()%10000;	
		n->next = aux->next;
		aux->next = n;
		n->prev = aux;		
	}		
}

int contalista( TFicha *un )
{
	int i = 0;
	while(un != NULL){
		i = i + 1;
		un = un->next;
	}
	return i;	
}

void excluirdaLista( TFicha *un )
{
	int id, cont = 0;
	
	printf("Entre com o cod do item a ser excluido: ");
	fscanf(stdin,"%d", &id);
	
	while(un != NULL){
		
		if(un->cod == id)
		{
			un->prev->next = un->next;
			un->next->prev = un->prev->prev;
			free(un);
			cont = cont + 1;
		}
		un = un->next;
	}
	
	if(cont == 0)
	{
		printf("\nO codigo digitado nao corresponde a um valor valido.\n");
		system("pause");
	}
	
	
}


int inserirnaLista( TFicha *un )
{
	int n, i;
	TFicha *foo = un;
	
	i = contalista(un);
	char opcao = 'y';
	system("cls");
	
	if( i == 0 )
	{
		printf("\nA lista esta vazia. Deseja adicionar um registro agora? (y/n)");					
		n = validafuncao(opcao); //scanf
	}
	else
	{
		printf("\nDeseja adicionar mais um registro? (y/n)");
		n = validafuncao(opcao); //scanf
	}
	
	if(n == 0)
	{
		novaTFicha(&un, i);
		exibeTFicha(un);
		i+=1;
		system("pause");
		return inserirnaLista( un );		
	}	
}


void inserir( TFicha **un )
{
	int n;
	n = inserirnaLista(*un);
}

int main(void)
{
	int i = 0, n = 0, menu;
	TFicha *un = NULL;
	char opcao = 'y';
	srand(time(NULL));
		
	do{
		
		printf("\nMenu: \n1- Inserir\n2- Listar\n3- Excluir\n4- Mudar\n5- Sair\n\nEscolha uma opcao: ");
		scanf("%d", &menu);
		if(menu == 1)
		{
			inserir(&un);
		}
		
		if(menu == 2)
		{
			funcexibirLista(&un);
		}
		
		if(menu == 3)
		{
			excluirdaLista(un);
		}
		
		if(menu == 5){
			n = 1;
		}
		
			
	}
	while(n == 0);
	
	liberaTFicha(un);
	
	return 0;	
}
