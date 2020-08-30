#include <stdio.h>
#include <string.h>

int ehpalindromo( char v[], int tam )
{
	int i, j, cont = 0;
	
	for(i = 0, j = tam-1; i < tam/2; i++, j--)
	{
		if(v[i] == v[j])
		{
			printf("\n%c e %c", v[i], v[j]);
			cont++;
		}
	}
	printf("\ncont: %d\n", cont);
	
	if(cont == (tam /2))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main(void)
{
	int tam, ret;
	char p[20];
	gets(p);
	printf("\nVc digitou: %s\n", p);
	tam = strlen( p );
	printf("De tamanho: %d\n", tam);
	ret = ehpalindromo( p, tam );
	printf("%d", ret);
}
