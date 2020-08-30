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
}

int main(void)
{
	char texto[128];
	FILE *fp;
	fp = fopen("stdin.txt", "r");
	while(fgets(texto,128,fp)!=NULL){		
		correcao(texto, 128);
		printf("%s",texto);
	}
	printf("\n\n");
	return 0;
}
