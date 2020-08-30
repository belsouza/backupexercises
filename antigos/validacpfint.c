#include <stdio.h>

//Funcao recursiva

int manopla(int num)
{
	if(num > 0)
	{
		printf("%d", num % 10);		
		return manopla((num - (num % 10)) / 10 );
	}
	return 0;	
}

int main(void)
{
	
	//Forma extensa
	int cpf = 82306;
	int d1, d2, d3, d4, d5;
	
//	printf("Entre com um numero: ");
//	scanf("%llu", &cpf);
	
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
	

	
	manopla(cpf);
	
}
