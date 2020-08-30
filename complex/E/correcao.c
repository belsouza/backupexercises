#include <stdio.h>
#include <string.h>

void correcao( char texto[] , int tam)
{
	int i, muda = 0;	
	for(i = 0; i < tam; i++)
	{
		if((texto[i]== ' ') && (texto[i+1] == ','))
		{
			muda = 1;
		}		
				
		if(muda == 1)
		{
			texto[i] = texto[i+1];
		}
	}
	
	muda = 0;
	for(i = 0; i < tam; i++)
	{
		if((texto[i]== ' ') && (texto[i+1] == '.'))
		{
			muda = 1;
		} 
		
		if(muda == 1)
		{
			texto[i] = texto[i+1];
		}
	}	
	
	printf("%s\n", texto);
}

int main(void)
{
	int tam;
	char texto[200];
	FILE *fp;
	fp = fopen("stdin.txt", "r");
	while(fscanf(fp, "%[^\n]%*c", texto) != EOF){
		tam = strlen(texto);
		correcao(texto, tam);
	}
	return 0;
}
