#include <stdio.h>
#include <stdlib.h>

//Intervalo entre 10 e 20
//(rand() % 11) + 10

int ehvalido(int la, int ca, int lb, int cb)
{
	if(ca == lb)
	{
		return 1;
	}
	return 0;
}

void aux_creatematr( int ***matr, int linha, int coluna)
{
	int **p, i;
	p = (int **) malloc( linha * (sizeof(int *)));
	for(i = 0; i < linha; i++)
	{
		p[i] = (int *) malloc(coluna * sizeof(int));
	}
	*matr = p;	
}


void starting( int la, int ca, int lb, int cb )
{
	FILE *fp, *sp;
	int i, j;
	sp = fopen("matriz.txt","r");
	if(!sp)
	{
		fp = fopen("matriz.txt","w+");
		fprintf(fp,"%c\n",'A');	
		srand(time(NULL));
		for(i = 0; i < la; i++)
		{
			for(j = 0; j < ca; j++)
			{
				fprintf(fp,"%d ",rand()%10);
			}
			fprintf(fp,"%c", '\n');
		}
		
		fprintf(fp,"\n%c\n",'B');
		for(i = 0; i < lb; i++)
		{
			for(j = 0; j < cb; j++)
			{
				fprintf(fp,"%d ",rand()%10);
			}
			fprintf(fp,"%c", '\n');
		}
		fclose(fp);
	}	
	

}

int main(void){
	
	int i, **matr;
	int la, ca, lb, cb;
	printf("Entre com as dimensoes da primeira matriz: ");
	scanf("%d  %d", &la, &ca);
	
	printf("Entre com as dimensoes da primeira matriz: ");
	scanf("%d  %d", &lb, &cb);
	
	if(ehvalido(la,ca,lb,cb))
	{
		printf("\nO produto das matrizes eh possivel.");		
		starting(la, ca, lb, cb);
		
	}
	else
	{
		printf("\nO produto nao eh possivel. ");
	}
	
	return 0;
}
