#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 20

void substituindotodas( char *destino, int tam )
{
	int i;
	for(i = 0; i < tam; i++)
	{
		destino[i] = '*';
	}
	destino[i] = '\0';
}

int avaliastring( char destino[], int tam, int *status )
{
	int i, cont = 0;
	char temp[20];
	
	strcpy(temp, destino);
	for(i = 0; i < tam; i++)
	{
		if( temp[i] == '*')
		{
			cont++;
		}
	}
	
	*status = cont;	
	
}

int procuranovetor( char c, char origem[], char destino[], int tam  )
{
	int i, cont = 0, nerros = 0, lim = 8;
	
	for(i = 0; i < tam; i++)
	{
		if(c == origem[i])
		{
			destino[i] = c;	
			cont++;		
		}				
	}
	
	return cont;
}

void exibevetor( char v[], int tam )
{
	int i;
	for( i = 0; i < tam; i++ )
	{
	     printf("%c", v[i]);
	}
	printf("\n");
}

int main(void)
{
	int length = 0, tentativas = 0, cont = 0, status = 1;
	char c;
	char entrada[20];
	char exibido[20];
	
	printf("\nEntre com uma palavra:  ");	
	scanf("%s", entrada );
	system("CLS");
		
	length = strlen(entrada);	
	substituindotodas( exibido, length );	
			
	do
	{	
	    fflush(stdin);
	    
	    exibevetor( exibido, length );
		printf("\nEntre com a letra: ");
		scanf("%c", &c);				
				
		cont = procuranovetor( c, entrada, exibido, length );
		system("CLS");
				
		if(cont == 0)
		{
			if(tentativas < 7)
			{
				printf("\nLetra Errada! Mais %d tentativas\n\n", 7 - tentativas );
				tentativas++;				
			}
			else
			{
				printf("\nQue pena! Fim de jogo. A palavra era: ");
				exibevetor( entrada, length );
				return 0;
			}			
		}
		else
		{
			printf("\nA letra %c foi encontrada na palavra!!!\n", c);	
		}
		
		avaliastring( exibido, length, &status );
		if( status == 0 )
		{
			printf("\nParabens!!! Voce terminou o jogo com sucesso!\n");
			return 0;
		}	
		
	}
	while(tentativas < 8);
	
}
