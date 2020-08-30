#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct dupla{
	int c;
	char p[2];
} Dupla;

typedef struct trupla{
	char p1[2];
	char p2[2];
	int q;
} Trupla;

int triSize( int n )
{
	if(n > 1)
	{
		return (n * triSize(n - 1));
	}
	else
	{
		return 1;
	}
}

void printdupla( Dupla *p, int tam)
{
	int i;
	
	for(i = 0; i < tam; i++)
	{
		printf("%s  %d\n", p[i].p, p[i].c);
	}
}

void printtrupla( Trupla *p, int tam)
{
	int i, tsize;
	tsize = triSize(tam);
	
	for(i = 0; i < tsize; i++)
	{
		printf("%s  %s  %d\n", p[i].p1, p[i].p2, p[i].q);
	}
}

int estacontido( char p1[], Dupla *vetor, int origemtamanho )
{
	int i;
	for( i = 0; i < origemtamanho; i++)
	{
		if(strcmp(p1, vetor[i].p) == 0)
		{
			return 1;
		}
	}
	
	return 0;
}


void reset( Dupla **origem, Trupla **auxiliar, int *t )
{
	FILE *fp;
	int tam, tsize, i, j, k;
	Dupla *a;
	Trupla *b;
	
	fp = fopen("3035.txt", "r");
	fscanf(fp,"%d",&tam);
	tsize = triSize(tam);
	
	a = (Dupla *) malloc( tam * sizeof(Dupla));
	b = (Trupla *) malloc( tsize * sizeof(Trupla));
	
	for(i = 0; i < tam; i++)
	{
		fscanf(fp,"%s  %d", &a[i].p, &a[i].c );
	}
	
	for(j = 0; ((j < tsize) && (!feof(fp))); j++)
	{
		fscanf(fp, "%s  %s  %d", &b[j].p1, &b[j].p2, &b[j].q);
	}
	
	*origem = a;
	*auxiliar = b;
	*t = tam;	
}

int extract(char auxiliarvet[], int auxiliarnum, Dupla *origem, int tam )
{
	int i, aux;
	for(i = 0; i < tam; i++)
	{
		if(strcmp(origem[i].p, auxiliarvet) == 0)
		{
			aux = auxiliarnum * origem[i].c;
			return aux;
			
		}
	}	
}

void add(char* auxiliar, Dupla *destino, int cont, int tam)
{
	int i;
	for(i = 0; i < tam; i++)
	{
		if(strcmp(auxiliar, destino[i].p) == 0)
		{
			destino[i].c = destino[i].c + cont;
			break;
		}
	}
}

void cooperar( Dupla **destino, Dupla *origem, Trupla *auxiliar, int tam)
{
	int i, j, cont = 0, coffee, tsize;
	Dupla *des;

	des = (Dupla *) malloc(tam * sizeof(Dupla));
	tsize = triSize(tam);
	
	i = 0;
	for(j = 0; j < tsize; j++ )
	{
		coffee = estacontido( auxiliar[j].p1, des, tam );
		if(coffee == 0)
		{
			strcpy(des[i].p, strtok( auxiliar[j].p1 , "\n"));
			des[i].c = 0;
			i++;
		}								
	}
	
	for(i = 0; i < tsize; i++)
	{
		if(estacontido( auxiliar[i].p2, origem, tam ) == 1)
		{
			cont = extract(auxiliar[i].p2, auxiliar[i].q, origem, tam );
			add(auxiliar[i].p1, des, cont, tam);
		}		
	}
	
	for(i = 0; i < tsize; i++)
	{
		if(estacontido( auxiliar[i].p2, des, tam ) == 1)
		{
			cont = extract(auxiliar[i].p2, auxiliar[i].q, des, tam );
			add(auxiliar[i].p1, des, cont, tam);
		}		
	}

	printdupla(des, tam);
	*destino = des;
	
}

int main(void)
{
	int tam;
	Dupla *origem, *destino;
	Trupla *auxiliar;
	reset(&origem, &auxiliar, &tam);
	cooperar( &destino, origem, auxiliar, tam );
	
	return 0;
}
