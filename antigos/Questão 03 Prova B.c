/*Questão 03 [2,5 pontos]:
Implementar um programa que leia diversos números
inteiros positivos até que a terceira potência de 2 seja
informada pelo usuário. Ao final, devem ser exibidos:
a. Total de valores digitados;
b. Média dos valores entre a primeira e segunda
potências de 2.
Observação: sempre que um valor não positivo for
digitado, uma mensagem de erro deverá ser exibida
ao usuário. E estes valores não poderão ser
considerados no cálculo de cada um dos itens
solicitados.*/
#include<stdio.h>

int main()
{
	int unsigned numero,cont=0,somanumero=0,conttotal=0,somatotal=0;
	
	//Obter números até que a terceira potência de 2 seja inserida
	do
	{
		//Obter números
		printf("Insira um numero: ");
		scanf("%d",&numero);
		
		//Média dos valores entre a primeira e segunda potências de 2
		if(numero<4 && numero>2)
		{
			cont++;
			somanumero+=numero;
			conttotal++;
			somatotal+=numero;
		}
		else
		{
			if(numero<0)  //Exibir uma mensagem de erro se o valor inserido for negativo
			{
				printf("Insira um valor valido(valor>=0)");
			
			}
			else  //Total de valores digitados
			{
				conttotal++;
				somatotal+=numero;
			}
		}
	}while(numero!=8);
	
	//Exibir o total de valores digitados
	printf("Quantidade de valores digitados: %d\n",conttotal-1);
	
	//Exibir a soma de todos os valores
	printf("Soma dos valores digitados = %d\n",somatotal-8);
	
	//Exibir a média dos valores entre a primeira e segunda	potências de 2
	printf("Media dos valores entre a primeira e segunda potencias de 2: %.1f",(float)somanumero/cont);
}
