#include <stdio.h>

//Funcao recursiva

unsigned long long int manopla(unsigned long long int num)
{
	if(num > 0)
	{
		printf("%llu", num % 10);		
		return manopla((num - (num % 10)) / 10 );
	}
	return 0;
}

int main(void)
{
	
	//Forma extensa
	unsigned long long int cpf = 82306429715;
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
	
//	printf("Entre com um numero: ");
//	scanf("%llu", &cpf);
/*	
	d1 = cpf % 10; //5
	cpf = (cpf - d1) / 10;
	printf("\n%i", d1);
	
	d2 = cpf % 10;
	cpf = (cpf - d2) / 10;
	printf("\n%i", d2);
	
	d3 = cpf % 10;
	cpf = (cpf - d3) / 10;
	printf("\n%i", d3);
	
	d4 = cpf % 10;
	cpf = (cpf - d4) / 10;
	printf("\n%i", d4);
	
	d5 = cpf % 10;
	cpf = (cpf - d5) / 10;
	printf("\n%i", d5);
	
	d6 = cpf % 10;
	cpf = (cpf - d6) / 10;
	printf("\n%i", d6);
	
	d7 = cpf % 10;
	cpf = (cpf - d7) / 10;
	printf("\n%i", d7);
	
	d8 = cpf % 10;
	cpf = (cpf - d8) / 10;
	printf("\n%i", d8);
	
	d9 = cpf % 10;
	cpf = (cpf - d9) / 10;
	printf("\n%i", d9);
	
	d10 = cpf % 10;
	cpf = (cpf - d10) / 10;
	printf("\n%i", d10);
	
	d11 = cpf % 10;
	cpf = (cpf - d11) / 10;
	printf("\n%i", d11);
*/	
	manopla(cpf);
	
}
