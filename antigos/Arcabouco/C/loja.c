#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aux_espaco()
{
	int i, tam;
	tam = ( 10 * 10 ) / 2;
	for(i = 0; i < tam; i++)
	{
		printf("*");
	}
	printf("\n");
}

void aux_resetmes( int vet[], int tam )
{
	int i;
	for(i = 0; i < tam; i++)
	{
		vet[i] = 0;
	}
}

void mostrando( int matriz[12][10]) 
{
	int i, j;
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 10; j++)
		{
			printf("%3d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void semeando( int matriz[12][10] )
{
	int i, j;
	srand(time(NULL));
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 10; j++)
		{
			matriz[i][j] = rand()%100;
		}
	}
}

int total( int matriz[12][10])
{
	int i, j, soma = 0;
	
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 10; j++)
		{
			soma = soma + matriz[i][j];
		}
	}
	
	return soma;
}

int totalmes( int matriz[12][10], int mes )
{
	int i, j, cont = 0;
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if(mes == j)
			{
				cont = cont + matriz[i][j];
			}
		}
	}
	
	return cont;
}


int totalfunc (int matriz[12][10], int func )
{
	int i, j, cont = 0;
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if(func == i)
			{
				cont = cont + matriz[i][j];
			}
		}
	}
	
	return cont;
}

int aux_mesmaior( int vet[], int tam )
{
	int i, maior = -9999, indicemaior = 0;
	for(i = 0; i < tam; i++)
	{
		if(vet[i] > maior)
		{
			maior = vet[i];
			indicemaior = i;
		}
	}
	
	return  indicemaior;	
}

int mesmaior ( int matriz[12][10] )
{
	int vet[12], i, j, k, maior;
	aux_resetmes( vet, 12 );
	
	for(k = 0; k < 12; k++)
	{
		for(i = 0; i < 12; i++)
		{
			for(j = 0; j < 10; j++)
			{
				if(i == k)
				{
					vet[k] = vet[k] + matriz[i][j];
				}
				
			}
		}
	}
	
	maior = aux_mesmaior(vet, 12);
	return maior;	
}


int aux_funcmenor( int vet[], int tam )
{
	int i, menor = 9999, indicemenor;
	for(i = 0; i < tam; i++)
	{
		if(vet[i] < menor)
		{
			menor = vet[i];
			indicemenor = i;
		}
	}
	
	return indicemenor;
}

int funcmenor( int matriz[12][10] )
{
	int vet[10], i, j, k, menor=0;
	
	aux_resetmes(vet, 10);
	
	for(k = 0; k < 10; k++)
	{
		for(i = 0; i < 12; i++)
		{
			for(j = 0; j < 10; j++)
			{
				if(j == k)
				{
					vet[k] = vet[k] + matriz[i][k];
				}
				
			}
		}
	}
	
	menor =aux_funcmenor(vet, 10);
	return menor;	
}


int main(void)
{
	int matriz[12][10], mes, func;
	semeando(matriz);
	mostrando(matriz);
	
	aux_espaco();
	printf("a) Total vendido durante o ano: %d\n", total(matriz));
	
	aux_espaco();
	printf("Entre com o mes: ");
	scanf("%d", &mes);
	printf("b) Total vendido no mes %d: %d\n", mes, totalmes(matriz, mes) );
	
	aux_espaco();
	printf("Entre com o numero do funcionario: ");
	scanf("%d", &func);	
	printf("\nc) Total vendido pelo funcionario %d: %d\n", func, totalfunc(matriz, func));
	
	aux_espaco();	
	printf("d) Mes com o maior numero de vendas: %d\n", mesmaior(matriz));
	
	aux_espaco();
	printf("e) Funcionario que menos vendeu durante o ano: %d\n", funcmenor(matriz));
	
	return 0;
}



