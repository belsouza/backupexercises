#include <stdio.h>
#include <stdlib.h>

void geravetor( int **vet, int n, int a )
{
	int i, *temp;
	srand(time(NULL));
	temp = (int *) malloc(n * sizeof(int));
	
	for(i = 0; i < n; i++)
	{
		temp[i] = (rand() % (a - 1));
	}
	*vet = temp;	
}

void criarquivo( int v[], int tam )
{
	int i;
	FILE *fp;
	fp = fopen("vettofile.dat","w");
	if(!fp){
		printf("Nao foi possivel criar o arquivo\n");
		exit(1);
	}
	for(i = 0; i < tam; i++){
		fprintf(fp,"%d ", v[i]);
	}
	fclose(fp);
}

int main(void){
	int n, a, *vet;	
	printf("Entre com o numero de elementos e a amplitude do intervalo de elementos: ");
	scanf("%d  %d",&n, &a);
	geravetor(&vet, n, a);
	criarquivo(vet, n);
	return 0;
	
}
