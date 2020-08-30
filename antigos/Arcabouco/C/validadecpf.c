#include <stdio.h>
#define TAM 11

int validacpf( int vet[] )
{
	int i, j;
	int pass1, pass2, passo1, passo2, vpd, vsd;
	
	pass1 = pass2 = vpd = vsd =  0;
	
	
	for(i = 0, j = 10; i <= 8; i++, j--)
	{
		pass1 = pass1 + (vet[i] * j);
		//printf("%d + (%d * %d)\n;", pass1, vet[i], j);
	}
		
	passo1 = (pass1 * 10) % 11;
	//printf("\nPasso 1: %d\n\n", pass1);
	
	if(passo1 == 10)
	{
		passo1 = 0;
	}
	
	for(i = 0, j = 11; i <= 9; i++, j-- )
	{
		pass2 = pass2 + (vet[i] * j);
		//printf("%d + (%d * %d)\n;", pass2, vet[i], j);
	}
	
	//printf("\nPasso 2: %d\n\n", pass2);
	passo2 = (pass2 * 10) % 11;
	
	if(passo2 == 10)
	{
		passo2 = 0;
	}
	
	if(passo1 == vet[9])
	{
		//printf("\nPrimeiro digito: %d", passo1);
		vpd = 1;
	}
	if(passo2 == vet[10])
	{
		//printf("\nSegundo digito: %d", passo2);
		vsd = 1;
	}
	if(vpd && vsd)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}

int main(void)
{
	int i, cpf[11];
	for(i = 0; i < 11; i++)
	{
		printf("\nDigito %d: ", i);
		scanf("%d", &cpf[i]);		
	}
	
	if(validacpf(cpf) == 1)
	{
		printf("\nO cpf eh valido.\n");
	}
	else
	{
		printf("\nO cpf eh invalido.\n");
	}
	return 0;
}
