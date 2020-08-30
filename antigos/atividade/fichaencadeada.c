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

int contalista( TFicha *un )
{
	int i = 0;
	while(un != NULL){
		i = i + 1;
		un = un->next;
	}
	return i;	
}


void liberaTFicha( TFicha *un )
{
	while(un != NULL){
		free(un);
		un = un->next;
	}	
}

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


void inicializar( TFicha **un )
{	
	srand(time(NULL));
	TFicha *n = (TFicha *) malloc(sizeof(TFicha));		
	n->index = 0;
	n->cod = rand()%10000;	
	n->next = NULL;
	n->prev = NULL;
	*un = n;
}

void exibir( TFicha *n )
{
	TFicha *un = n;
	while(un != NULL)
	{
		printf("\nID: %d\nCOD: %d\n", un->index, un->cod);
		un = un->next;
	}
	printf("\n");
}

void novoreg( TFicha **un )
{
	int maior = 0, ant; 
	TFicha *aux = *un;	
	for(aux; aux->next != NULL; aux = aux->next)
	{
		
		if(aux->next->index > maior )
		{
			maior = aux->next->index;
		}
	}
	
	maior = maior + 1;
	srand(time(NULL));
	TFicha *n = (TFicha *) malloc(sizeof(TFicha));		
	n->index = maior;
	n->cod = rand()%10000;	
	n->next = aux->next;
	aux->next = n;
	n->prev = aux;
	
	if(un != NULL)
	{
		system("cls");
		printf("\nRegistro inserido com sucesso! \n\n");
	}	
}

int inserir( TFicha **un )
{
	char opt;
	int num = 0, i, aux;
	i = contalista( *un );	
	do
	{
		if(i == 1)
		{
			printf("\nDeseja inserir um novo registro? (y/n): ");
		} 
		else
		{
			printf("\nDeseja inserir mais um registro? (y/n): ");
		}
			
		aux = validafuncao(opt);
		if(aux == 1) 
		{
			num = 1;
		}
		else
		{
			novoreg(un);
			exibir(*un);
		}				
	}while( num == 0 );
	
		
	return 0;
}

int listar(TFicha **un)
{
	TFicha *foo = *un;
	exibir(foo);
	system("pause");
	return 0;
}

int excluir( TFicha **foo )
{
	TFicha *un, *aux, *trash;
	un = *foo;
	int cod, cont = 0, id;
	
	exibir( un );
	
	printf("Entre com o id ou cod do item a ser excluido: ");
	fscanf(stdin,"%d", &cod);
	id = cod;
	
	//excluir
	for(un; un!= NULL; un = un->next)
	{	
		if((un->cod == cod) || (un->index == id))
		{		
			
			if(un->next == NULL)
			{				
				un->prev->next = NULL;
				cont = cont + 1;
				free(un);				
			}
			else
			{
				if(un->prev == NULL)
				{
					trash = un;
					un->next->prev = NULL;
					cont = cont + 1;
					free(trash);
				}
				else
				{
					un->prev->next = un->next;
					un->next->prev = un->prev->prev;
					cont = cont + 1;				
					free(un);	
				}				
			}	
		}		
	}
	
	if(cont == 0)
	{
		printf("\nO codigo digitado nao corresponde a um valor valido.\n");
		system("pause");
	}
	else
	{
		aux = *foo;
		cont = 0;
		for(aux; aux->next!=NULL; aux = aux->next)
		{
			if((aux->next->cod == cod) && (aux->next->index == cod))
			{
				cont = cont + 1;
			}
		}
		
		if(cont == 0)
		{
			printf("\nRegistro excluido com sucesso! \n\n");
			exibir( *foo );
			system("pause");
		}
	}
	
	return 0;
}

int mudar( TFicha **un )
{
	TFicha *temp, *aux, *aux2;
	temp = aux2 = *un;
	int num, status = 0, ncont = 0, id;
	
	do{
		exibir( aux2 );
		
		
		printf("Entre com o id do item a ser alterado: ");
		fscanf(stdin,"%d", &id);
		
		printf("Entre com novo valor do codigo: ");
		fscanf(stdin,"%d", &num);
		
						
		for(temp; temp->next != NULL; temp = temp->next)
		{
			if(temp->index == id)
			{				
				temp->cod = num;
				ncont = ncont + 1;
			}			
		}
		
		if(ncont == 0)
		{
			printf("Nenhum registro com este id encontrado. \n");
			printf("\nDeseja continuar alterando? ");
			status = validafuncao('y');
		}
		else
		{
			exibir(aux);		
			printf("\nDeseja continuar alterando? ");
			status = validafuncao('y');
		}	
		
	}
	while(status == 0);
	
	return 0;
}



int main(void)
{
	int n = 0, menu;
	TFicha *un;
	char opcao = 'y';
	srand(time(NULL));
	inicializar(&un);	
		
	do{	
		system("cls");	
		printf("\nMenu: \n1- Inserir\n2- Listar\n3- Excluir\n4- Mudar\n5- Sair\n\nEscolha uma opcao: ");
		fscanf(stdin, "%d", &menu);
		
		if(menu == 1)
		{
			n = inserir(&un);
		}
		
		if(menu == 2)
		{
			n = listar(&un);
		}
		
		if(menu == 3)
		{
			n = excluir(&un);
		}
		
		if(menu == 4)
		{
			n = mudar(&un);
		}
		
		if(menu == 5)
		{
			n = 1;
		}
				
	}
	while(n == 0);
	
	liberaTFicha(un);
	
	return 0;	
}
