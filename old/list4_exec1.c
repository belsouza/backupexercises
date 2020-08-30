#include <stdio.h>
// todo o 7 e tam. Tam não funciona, entao, vai 7 mesmo

typedef struct voto
{
	char eleitor[20];
	int voto;
	
} TVotacao;

typedef struct cand
{
	int candidato;
	int brancos;
	int nulos;
	
} TCandidatos;


int main(void)
{
	int n, i=0, j = 0, candidato, ncandidatos = 6;
	TVotacao zn[20];
	TCandidatos px[ncandidatos]; // sao 6 candidatos
	

	
	printf("Entre com o n de eleitores: ");	
	scanf("%d", &n);
	
	do
	{
		printf("\n\nNome: ");
		fflush(stdin);
		scanf("%s", &zn[i].eleitor);
		
		printf("\nVoto: ");
		fflush(stdin);
		scanf("%d", &candidato);
		
		
		
		i++;		
	}	
	while(i <= n && candidato != -1); 
	
	
	return 0;	
}
