#include <stdio.h>
#include <string.h>

void correcao(char texto[], int tam)
{
	int i, muda = 0;
	strtok(texto, '\n');
	for(i = 0; i < tam; i++)
	{
		if((texto[i] == ' ') && (texto[i+1] == ','))
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
		if((texto[i] == ' ') && (texto[i+1] == '.'))
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
	while(fgets(texto, 128, stdin) != NULL){			
		correcao(texto, 128);		
		printf("%s",texto);
	}
	printf("\r\n");
	return 0;
}
