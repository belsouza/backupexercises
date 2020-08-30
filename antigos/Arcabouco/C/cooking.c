#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int num;
	struct node *next;
}
Cookie;

Cookie* head = NULL;

void exibir( Cookie *p )
{
	while(p != NULL)
	{
		printf("%d ", p->num);
		p = p->next;
	}
	printf("\n");
}

int contador( Cookie *p )
{
	int cont = 0;
	Cookie *aux = p;
	while(aux != NULL)
	{
		cont = cont + 1;
		aux = aux->next;
	}
	free(aux);
	return cont;	
}

void inserir_no_comeco( Cookie **p, int num )
{
	Cookie *aux, *aux2;	
	if(p == NULL)
	{
		aux = *p;
		aux = (Cookie*)malloc(sizeof(Cookie));
		aux->num = num;
		aux->next = NULL;
		*p = aux;
	}
	else
	{		
		aux2 = (Cookie*)malloc(sizeof(Cookie));
		aux2->num = num;
		aux2->next = *p;
		*p = aux2;		
	}
}


void inserir_no_final(Cookie **p, int num )
{
	Cookie *aux = *p;
	while(aux->next != NULL)
	{
		aux = aux->next;
	}
	
	aux->next = (Cookie *) malloc(sizeof(Cookie));
	aux->next->num = num;
	aux->next->next = NULL;		
}


void inserir_na_posicao(Cookie **p, int num, int pos)
{
	
	Cookie *temp, *aux;
	int i, j, tam;
	tam = contador(*p);
	temp = *p;
	
	i = 0;
	while(temp->next != NULL)
	{
		j = i - 1;
		if(j == pos)
		{
			printf("%d ", temp->num);
			//aux = (Cookie*)malloc(sizeof(Cookie));
			//aux->num = num;
		}
		temp = temp->next;
		i++;
	}	
}

int main(void)
{
	inserir_no_comeco(&head, 20);
	exibir(head);
	inserir_no_comeco(&head, 10);
	exibir(head);
	inserir_no_final(&head, 30);
	exibir(head);
	inserir_no_final(&head, 40);
	exibir(head);
	
	inserir_na_posicao(&head, 15 , 2);
	
		
	free(head);
	return 0;	
}

