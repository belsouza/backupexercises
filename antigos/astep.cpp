#include <stdio.h>
#include "astephead.h"

int main(void)
{
	int grupo, i;
	int pontos[32];
	int salgols[32];
	int golsfeitos[32];
	int golsconv[32];
	
	reset(pontos, salgols, golsfeitos, golsconv, 32);
	
	grupo = 0;
	while(grupo < 32){
		
		preliminares(pontos, salgols, golsfeitos, golsconv, grupo);
		grupo+=4;
	}
				
	for(i = 0; i < 32; i++)
	{
		printf("%d", pontos[i]);
	}

	
}
