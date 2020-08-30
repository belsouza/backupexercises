#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int num;
	struct no *next;
} Tno;

Tno *head = NULL;

void inicializar( Tno **p, int n )
{
	Tno *q;
	q = (Tno *) malloc(sizeof(Tno));
	q->num = n;
	q->next = NULL;
	*p = q;
}

void exibir( Tno *p )
{
	while(p != NULL)
	{
		printf("%d \t[%p]\n", p->num, p->next);
		p = p->next;
	}
	printf("\n");
}

void adicionar( Tno **p, int n )
{
	Tno *l, *mm;
	mm = *p;
	while( mm->next != NULL)
	{
		mm = mm->next;
	}
	l = (Tno *) malloc(sizeof(Tno));
	l->num = n;
	l->next = mm->next;
	mm->next = l;
	mm = l;	
}


void add( Tno **p, int n )
{
	Tno *r;
	r = (Tno * ) malloc(sizeof(Tno));
	r->num = n;
	r->next = *p;
	*p = r;
}



int aux_procura( Tno *p, int nprocurado ){
	
	int i = 0;
	while(p != NULL)
	{
		if(p->num == nprocurado)
		{
			return i;
		}
		p = p->next;
		i++;
	}	
}

void procura( Tno *p ){
	
	int procurado, res = 0;
	printf("Digite um numero para ser encontrado na lista:");
	
	scanf("%d", &procurado);
	res = aux_procura(p, procurado);
	if(res != 0){
		printf("O numero procurado foi localizado na posicao %d\n", res+1);
	}
	else
	{
		printf("O numero nao foi encontrado.");
	}	
}

void adix( Tno **p, int n, int pos ){
	
	int i = 1;
	Tno *g, *t;
	g = *p;
	
	t = (Tno *) malloc(sizeof(Tno));
	t->num = n;	
	
	while( g != NULL ){
		
		if(i == pos)
		{
			t->next = g->next;
			g->next = t;		
		}			
		++i;
		g = g->next;		
	}
}

void remx( Tno **p, int pos ){
	
	int i = 1;
	Tno *temp, *aux, *tr;
	temp = *p;
	
	while(temp != NULL)
	{
		if(i == pos){
			tr = temp;
			tr->next = temp->next;
			temp->next = temp->next->next;
									
		}
		++i;		
		temp = temp->next;
	}
	free(tr);

}







int main(void)
{
	
	
	inicializar(&head, 10);
	exibir(head);
	
	adicionar(&head, 20);
	exibir(head);
	
	adicionar(&head, 30);
	exibir(head);
	
	adicionar(&head, 40);
	exibir(head);
	
	adicionar(&head, 65536);
	exibir(head);
	
	add(&head, 5);
	exibir(head);
	
	adix( &head, 4, 2);
	exibir(head);
	
	remx( &head, 2);
	exibir(head);
	
	
	
	return 0;
}


