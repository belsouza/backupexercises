#include <stdio.h>
#define TAM 32
//Exercicio 1026 do URI

int vclear( int vet[] )
{
	int i;
	for(i = 0; i < TAM; i++)
	{
		vet[i] = 0;
	}
}

void invert( int vet[] )
{
	int i, j,  meio, temp;
	meio = TAM/ 2;
	for(i = 0, j = TAM-1; i < meio; i++, j--)
	{
		temp = vet[i];
		vet[i] = vet[j];
		vet[j] = temp;
	}	
}

void vexibe( int vet[] )
{
	int i;
	for(i = 0; i < TAM; i++)
	{
		printf("%d ", vet[i]);
	}
	printf("\n");
}


void bin(unsigned long long int num, int vet[], int i){
	
	if(num > 0)
	{
		vet[i] = num % 2;
		i = i+1;
		bin(num / 2, vet , i);
	}
}

unsigned long long int meupow( int base, int expoente )
{
	int i;
	unsigned long long int prod = 1;
	for(i = 0; i < expoente; i++)
	{
		prod = prod * base;
	}
	
	return prod;
}



unsigned long long int concatenar(int vet1[], int vet2[]) 
{
	int i, j, vet3[TAM]; 
	unsigned long long int soma = 0, exp, aux;
	
	vclear(vet3);
		
	for(i = 0; i < TAM; i++)
	{
		if((vet1[i] == 0 && vet2[i] == 0) || (vet1[i] == 1 && vet2[i] == 1))
		{
			vet3[i] = 0;
		}
		
		if((vet1[i] == 1 && vet2[i] == 0) || (vet1[i] == 0) && (vet2[i] == 1))
		{
			vet3[i] = 1;
		}		
	}
	
		
	for(j = 0; j < TAM; j++)
	{
		exp = TAM - j - 1;	
		if(vet3[j] == 1)
		{			
		    aux = meupow(2, exp);			
			soma = soma + aux;
		}
	}
	
	return soma;
}


int main(void)
{
	int i = 0, par;
	int nbin1[TAM], nbin2[TAM];
	unsigned long long int num1, num2, res;
	//FILE *fp = fopen("numeros.txt","r");

	while(fscanf(stdin,"%lld  %lld", &num1, &num2) != EOF)
	{	
		vclear(nbin1);
		vclear(nbin2);
		bin(num1, nbin1, i);
		bin(num2, nbin2, i);
		invert(nbin1);
		invert(nbin2);
		res = concatenar(nbin1, nbin2);
		printf("%lld\n", res);				
	}
		
	return 0;
}
