#include <stdio.h>


int main(void)
{
	int e = 1;
	int voto, abs;
	int v10 = 0, v20 = 0, v30 = 0, v40 = 0, nl = 0, bk = 0;
	
	do
	{
		printf("\nVoto %d:", e);
		scanf("%d", &voto);
		
		switch(voto)
		{
			case 10:
				v10++;
				break;
				
			case 20:
				v20++;
				break;
				
			case 30:
				v30++;
				break;
				
			case 40:
				v40++;
				break;
				
			case 0:
				bk++;
				break;
				
			default:
				if(voto != -1)
				{
					nl++;
				}
					
		}
		
		if(voto != -1)
		{
			e++;
		}
		
	}
	while(voto!=-1 && e <= 50);
	
	
	abs = 50 - e; //Todos os votos, menos aqueles que, votaram : e

	printf("\nCandidato 10: %d\n", v10);
	printf("\nCandidato 20: %d\n", v20);
	printf("\nCandidato 30: %d\n", v30);
	printf("\nCandidato 40: %d\n", v40);
	
	printf("\nVotos brancos: %d\n", bk);
	printf("\nVotos nulos: %d\n", nl ); //O -1 vota como nulo
	printf("\nAbstencoes: %d\n", abs  );
	return 0;
	
}
