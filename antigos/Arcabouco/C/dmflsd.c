#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct dupla{
	int c;
	char p[10];	
} Dupla;



void exibe( Dupla *source , int tam)
{
	int i;
	for(i = 0; i < tam; i++)
	{
		printf("%s  %d\n", source[i].p, source[i].c);
	}
}

void preenche( Dupla **source, int *size)
{
	int i, tam;
	FILE *fp;
	Dupla *p,  *d;
	fp = fopen("3035.txt", "r");
	
	fscanf(fp,"%d",&tam);
	
	p = (Dupla *) malloc(tam * sizeof(Dupla));
	d = (Dupla *) malloc(tam * sizeof(Dupla));
	
	i = 0;
	do
	{
		if(i < tam)
		{
			fscanf(fp,"%s  %d", p[i].p, &p[i].c);
			i++;
		}	
	}while(!feof(fp));
	/*
	fscanf(fp,"%s  %d", p[i].p, &p[i].c);
		
	
	*/
	fclose(fp);
	*source = p;
	*size = tam;
}

int main(void)
{
	int tam;
	Dupla *source;
	preenche(&source, &tam);
	exibe(source, tam);
}

	


