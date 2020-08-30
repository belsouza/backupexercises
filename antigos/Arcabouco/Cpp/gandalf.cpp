#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 128

typedef struct poo
{
	int code;
	char keyword[TAM];
	struct poo *next;
	struct poo *prev;
}Node;


void mostrar( Node *p )
{
	while(p != NULL)
	{
		printf("%d ------  %s | [%p] [%p]\n", p->code, p->keyword, p->next, p->prev);
		p = p->next;
	}
	printf("\n");
}

void inicial(Node **p)
{
	Node *temp;
	temp = (Node *) malloc(sizeof(Node));
	printf("\nCode: %d", 001);
	temp->code = 001;
	printf("\nInitial Keyword: ");
	fscanf(stdin,"%s",temp->keyword);
	temp->next = NULL;
	temp->prev = NULL;
	*p = temp;	
}

void insertonStart( Node **p )
{
	int num;
	Node *temp, *aux;
	aux = *p;
	temp = (Node *) malloc(sizeof(Node));
	printf("\nEnter Code: ");
	scanf("%d", &temp->code);
	printf("Enter Keyword: ");
	fscanf(stdin,"%s",temp->keyword);	
	temp->prev = aux->prev; //pega o null
	aux->prev = temp;
	temp->next = aux;	
	*p = temp;
}

void insertonEnd( Node **p )
{
	int num;	
	Node *temp, *aux, *aux2;	
	aux = *p;
	temp = (Node *)malloc(sizeof(Node));
	printf("\nEnter Code: ");
	scanf("%d", &temp->code);
	printf("Enter Keyword: ");
	fscanf(stdin,"%s",temp->keyword);
	
	aux2 = aux;
	while(aux->next != NULL)
	{
		aux = aux->next;		
	}	
	temp->next = aux2->next;
	temp->prev = aux2->prev;
	aux2->next = temp;
	*p = aux2;
}

int main(void)
{
	int i;
	Node *cooper;
	inicial(&cooper);
	mostrar(cooper);
	insertonStart( &cooper );
	mostrar(cooper);
	insertonEnd( &cooper );
	mostrar(cooper);
}
