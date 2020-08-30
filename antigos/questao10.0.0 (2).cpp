/*
Questão 01:
Suponha que não existissem as funções strlen, strcpy, strcat e strcmp. 
Pede-se, então, a implementação de funções que tenham o mesmo objetivo daquelas.
*/

#include <stdio.h>
#include <string.h>

int xstrlen( char v[] )
{
	int i = 0;
	while( v[i] != '\0')
	{
		i++;
	}
	
	return i;
}

void xstrcpy( char s[], char r[] )
{
	int i;
    for(i = 0; r[i] != '\0'; i++)
    {
    	s[i] = r[i];
	}
	*(s + i) = '\0';
}

int xstrcmp( char s[], char r[] )
{
	int i, cont = 0;	
	
	for(i = 0; i < strlen(r); i++)
	{
		if(s[i] != r[i] )
		{
			cont++;
		}
	}
	
	return cont;
}




int main(void)
{
	int tam, eh, i, tam2;
	char a[20];
	char b[20];
	char c[20];
	
	printf("\nEntre com a string A: ");
	gets(a);
		
	tam = xstrlen(a);
	printf("\nA string digitada tem %d caracteres.", tam);
		
	xstrcpy( b, a );
	
	printf("\nA string A vale: \n");
	for(i = 0; i < tam; i++)
	{
		printf("%c", a[i]);
	}
	
	printf("\nA string B vale: \n");
	for(i = 0; i < tam; i++)
	{		
		printf("%c", b[i]);
	}
		
	eh = xstrcmp( b, a );
	if( eh == 0 )
	{
		printf("\nLogo, As strings A e B sao iguais!");
	}
	
	printf("\nAgora, Entre com a string C: ");
	gets(c);
	
	strcat(c , a);
	
	tam2 = strlen(c);
	
	printf("\nA string C vale: \n");
	for(i = 0; i < tam2; i++)
	{
		printf("%c", c[i]);		
	}	
		
}
