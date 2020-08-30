#include <stdio.h>

void readnum(int *vet, int num, int size); //pega o inteiro e joga para um vetor
long long int racha(long long int num, int *rec); // racha o numero inteiro


int main(void)
{
	int cpf[11];
	long long int cpfnum;
	
	printf("Entre com o numero do cpf:");
	scanf("%lld", &cpfnum);
	readnum(cpf, cpfnum, 11);
	
	printf("CPF NUM: %lld\n", cpfnum);
}

void readnum(int *vet, int num, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		vet[i] = num;
	}
}

long long int racha(long long int num, int *rec)
{
	if(num > 0)
	{
		*rec = num % 10;		
		return racha((num - (num % 10)) / 10, rec );
	}
	return 0;
}


