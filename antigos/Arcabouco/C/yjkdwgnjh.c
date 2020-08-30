#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int num;
	struct no *next;
}Tno;

void exibir( Tno *p )
{
	while(p != NULL)
	{
		printf("%d ---- [%p]...[%p]\n", p->num, p, p->next );
		p = p->next;
	}
	printf("\n\n");
}

void inicializar( Tno** p, int num){
	Tno *temp;
	temp = (Tno *)malloc(sizeof(Tno));
	temp->num = num;
	temp->next = NULL;
	*p = temp;
}

void inserirnofinal( Tno **p, int num )
{
	Tno *t = *p, *aux;
	
	while(t->next != NULL)
	{
		t = t->next;
	}
	
	aux = (Tno *) malloc(sizeof(Tno));
	aux->num = num;
	aux->next = t->next;
	t->next = aux;
	*p = t;	
}

void inserirnocomeco( Tno **p, int num )
{
	Tno *aux;
	aux = (Tno *) malloc(sizeof(Tno));
	aux->num = num;
	aux->next = *p;
	*p = aux;
}

int aux_substituir( Tno **p, int anterior, int novo )
{
	Tno *aux = *p;
	while(aux != NULL)
	{
		if(aux->num == anterior)
		{
			aux->num = novo;
			return 1;			
		}
		aux = aux->next;
	}
	return 0;
}

void substituir( Tno **p, int anterior, int novo )
{
	int response;
	response = aux_substituir( p, anterior, novo );
	if(response)
	{
		printf("\nAlteracao feita com sucesso.\n");
	}
	else{
		printf("Ops!");
	}
}

int aux_counter( Tno *p )
{
	int num = 0;
	while(p != NULL)
	{
		num = num + 1;
		p = p->next;
	}
	return num;
}

int aux_aviso_removeno( Tno **p, int num )
{
	Tno* aux = *p;
	while( aux != NULL )
	{
		if( aux -> num == num)
		{
			return 1;
		}
		aux = aux->next;		
	}
	return 0;
}

void removeno( Tno **p, int num )
{
	Tno* aux;
	Tno *trash;
	aux = *p;
	
	if(aux_aviso_removeno(p, num) == 0)
	{
		printf("\nO valor nao foi encontrado na lista.");
	}
	else
	{
		while(aux->next != NULL)
		{
			if(aux->next->num == num)
			{
				trash = aux->next;
				aux->next = aux->next->next;
			}
			aux = aux->next;
		}
		
		free(trash);
	}
}




int main(void)
{
	Tno *head;
	inicializar(&head, 10);
	exibir(head);
	inserirnofinal(&head, 20);
	exibir(head);
	inserirnocomeco(&head, 5);
	exibir(head);
	substituir( &head, 20, 25);
	exibir(head);
	removeno(&head, 4);
	removeno(&head, 25);
	exibir(head);
	return 0;
}
