#include <stdio.h>

int main(void)
{
	int cpf1;
	long cpf2;
	long long int cpf3;
	unsigned long long int cpf4;
	
	printf("\n\nTeste input/output int: ");
	scanf("%d", &cpf1);
	printf("\n%d", cpf1);
	
	printf("\n\nTeste input/output long int: ");
	scanf("%ld", &cpf2);
	printf("\n%ld", cpf2);
	
	printf("\n\nTeste input/output long long int: ");
	scanf("%lld", &cpf3);
	printf("\n%lld", cpf3);
	
	printf("\n\nTeste input/output unsigned long long int: ");
	scanf("%llu", &cpf4);
	printf("\n%llu", cpf4);
}

