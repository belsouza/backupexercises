#include <stdio.h>

int main(void)
{
	int i = 0, j = 0, num;
	float soma = 0;
	
	do
	{
		printf("\nEntre com o numero: ");
		scanf("%d", &num);
		
		if(num > 0)
		{
			if(num > 2 && num < 4)
			{
				soma += num;
				j++;
			}
		}
		else
		{
			printf("\nNumero nao aceito. O numero deve ser positivo.\n");
		}
		
		i++; //Total de numeros digitados;
		
	}
	while(num != 8);
	
	printf("\nForam digitados %d numeros.\n", i);
	printf("\nMedia dos valores entre a primeira e segunda potencias de 2: %.1f .\n", soma/j);
	
}
