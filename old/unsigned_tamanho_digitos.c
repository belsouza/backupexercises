#include <stdio.h>

int main(void)
{
	unsigned int cpf1;
	unsigned long cpf2;
	unsigned long long int cpf3;	
	
	printf("\n\nTeste input/output unsigned int: ");
	scanf("%u", &cpf1);
	printf("\n%u", cpf1);
	
	printf("\n\nTeste input/output unsigned long int: ");
	scanf("%lu", &cpf2);
	printf("\n%lu", cpf2);
	
	printf("\n\nTeste input/output unsigned long long int: ");
	scanf("%llu", &cpf3);
	printf("\n%llu", cpf3);

}

