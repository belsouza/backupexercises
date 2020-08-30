#include <stdio.h>

int main(void)
{
	int i = 0, j = 0, k = 0, num;
	float soma = 0;
	
	do
	{
		printf("\nEntre com o numero: ");
		scanf("%d", &num);
		
		if(num > 2 && num < 4)
		{
			soma += num;
			j++;
		}
		else
		{
			if(num < 0)
			{
				printf("\nNumero nao permitido.\n");
			}
			else
			{
				k++;
			}
		}
		
		i++; //Total de tentativas -- inclusive os errados;
		
	}
	while(num != 8);
	
	printf("\nForam digitados %d numeros no total,sendo\n", i);
	printf("\nque foram digitados %d numeros positivos.\n", k);
	printf("\nMedia dos valores entre a primeira e segunda potencias de 2: %.1f .\n", soma/j);
	
}
