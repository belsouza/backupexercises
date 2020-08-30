#include <stdio.h>
#include <string.h>

/*
strlen,
strcat,
strcpy
strcmp (comparação de strings) if(strcmp (x,y) pode ser 0, menor que 0 (a > m) ou maior que 0 (m < a)
*/

int contar (char *s, char ch)
{
	int i, cont = 0;
	i = 0;
	while( s[i] != '\0')
	{
		if(s[i] == ch)
		{
			cont++;
		}
		i++;
	}
	return cont;
}

int main(void)
{
	int n;
	char letra;
	char palavra[20];
	printf("\nEntre com a palavra: ");
	gets(palavra);
	printf("\nProcurar por: ");
	scanf("%c", &letra);
	n = contar(palavra, letra);
	printf("%d", n);
		
}
