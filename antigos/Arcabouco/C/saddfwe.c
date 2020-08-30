#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
	int num;
	struct no *next;
}
Tno;

//Função de inicialização
void novoNo( Tno **p , int num )
{
	Tno *head;
	head = malloc(sizeof(Tno));
	head->num = num;
	head->next = NULL;
	*p = head;
}

//Mostrar os nos
void exibir( Tno *p )
{
	if(p != NULL)
	{
		printf("%d[%p]--------[%p]\n", p->num, p, p->next);
		exibir( p->next);
	}
}

void inserir_no_final( Tno *p, int num )
{
	Tno *novo;
	novo = malloc(sizeof(Tno));
	novo->num = num;
	novo->next = p->next;
	p->next = novo;	
}

void inserir_no_inicio(Tno *p, int num)
{
	Tno *tmp, *aux;
	tmp = malloc(sizeof(Tno));
	tmp->num = num;	
	aux = p;	
	while(aux != NULL)
	{
		tmp->next = aux;
		aux = aux->next;
	}	
			
}

int main(void)
{
	Tno *p;
	novoNo(&p, 5);
	exibir(p);
	inserir_no_final(p, 10);
	exibir(p);
	inserir_no_inicio(p, 1);
	exibir(p);
	return 0;
}

