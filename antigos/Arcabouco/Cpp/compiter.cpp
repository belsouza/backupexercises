#include <iostream>
#include <stdlib.h>


typedef struct cell
{
	int num;
	struct cell *next;
}
Cookie;


class Compiter{
	
	Cookie* head;
	
	private:
		
		void exibir_cookie( Cookie* p )
		{
			if(p != NULL)
			{
				printf("%d ------[%p]\n", p->num, p->next);
				exibir_cookie(p->next);
			}
		}
		
		void inicializar_cookie( Cookie **p )
		{
			Cookie* head;
			head = (Cookie *) malloc(sizeof(Cookie));
			head->num = 0;
			head->next = NULL;
			*p = head;
		}
		
	public:
		
		void starting()
		{
			inicializar_cookie( &head );
			exibir_cookie(head);
		}	
	
};

int main(void)
{
	Compiter x;
	x.starting();
	
	return 0;
}
