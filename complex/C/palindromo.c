#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct base{
	char substring[15];	
}Dbase;

typedef struct dword{	
	int m;
	int n;
	char *str;
	Dbase substr[30];
}Dwords;


int compara(char maior[], char sub[])
{
	if(strstr(maior, sub) )
	{
		return 0;
	}
}


int npalindromos( Dwords foo , int tam)
{
	char invertido[15];
	int i,cont = 0;
	for(i = 0; i < tam; i++)
	{
		if(compara(foo.str, foo.substr[i].substring) == 0) cont++;			
	}
	return cont;
}

int main(void)
{
	int i, res, npal;
	Dwords foo;
	FILE *fp;
	fp = fopen("stdin.txt","r");
		
	while(fscanf(fp, "%d  %d", &foo.m, &foo.n) != EOF) {
	
		foo.str = (char *) malloc(foo.m * sizeof(char));
		fscanf(fp,"%s", foo.str);		
		for(i = 0; i < foo.n ; i++)
		{
			fscanf(fp,"%s",foo.substr[i].substring);			
		}
		
		npal = 	npalindromos(foo, foo.n);
		printf("%d\n", npal);	
	}	
	return 0;
}

