#include <stdio.h>

//Funcao recursiva

unsigned long long int manopla(unsigned long long int num)
{
	if(num > 0)
	{
		printf("\n%llu", num % 10);		
		return manopla((num - (num % 10)) / 10 );
	}
	return 0;
}

int main(void)
{
	
	//Forma extensa
	unsigned long long int cpf;
	printf("Entre com o numero do cpf: ");
	scanf("%llu", &cpf);		
	manopla(cpf);
	
}
