/*Questão 02 [3,0 pontos]:
Desenvolver um programa que simule uma calculadora
que realize as seguintes operações: adição (+),
subtração (-), multiplicação (x), divisão (/) e logaritmo
(L). O sistema deve permanecer apresentando um
menu ao usuário até que este opte pela opção de saída
(S). Se a opção escolhida for uma das 4 operações
básicas, devem ser solicitados os dois operadores; caso
escolha logaritmo, devem ser solicitados o número
(logaritmando) e a base.

Nota: logba = c <-> b^c = a

Observação: todos os operandos são números
reais, assim como a base e o logaritmando. Porém,
o resultado do logaritmo deverá ser inteiro.*/
#include<stdio.h>

int main()
{
	int opcao,contlog=0;
	float valor1,valor2;
	
	//Perguntar qual operação o usuário deseja
	printf("ADICAO = 1\nSUBTRACAO = 2\nMULTIPLICACAO = 3\nDIVISAO = 4\nLOGARITMO = 5\n");
	printf("Escolha uma opcao(1-5): ");
	scanf("%d",&opcao);
	
	
	
	switch(opcao)
	{
		case 1://Adição
			printf("\nPrimeiro valor + Segundo valor = Resultado\n\n");
			
			printf("Insira o primeiro valor: ");
			scanf("%f",&valor1);
			printf("Insira o segundo valor: ");
			scanf("%f",&valor2);
			printf("Resultado = %.1f",valor1+valor2);
			break;
		case 2://Subtração
			printf("\nPrimeiro valor - Segundo valor = Resultado\n\n");
		
			printf("Insira o primeiro valor: ");
			scanf("%f",&valor1);
			printf("Insira o segundo valor: ");
			scanf("%f",&valor2);
			printf("Resultado = %.1f",valor1-valor2);
			break;
		case 3://Multiplicação
			printf("\nPrimeiro valor x Segundo valor = Resultado\n\n");
		
			printf("Insira o primeiro valor: ");
			scanf("%f",&valor1);
			printf("Insira o segundo valor: ");
			scanf("%f",&valor2);
			printf("Resultado = %.1f",valor1*valor2);
			break;
		case 4://Divisão
			printf("\nPrimeiro valor / Segundo valor = Resultado\n\n");
			
			printf("Insira o primeiro valor: ");
			scanf("%f",&valor1);
			printf("Insira o segundo valor: ");
			scanf("%f",&valor2);
			printf("Resultado = %.1f",valor1/valor2);
			break;
		case 5://Logaritmo
			printf("\nLOGba=c\n\n");
			printf("Insira o valor da base: ");
			scanf("%f",&valor1);
			printf("Insira o valor do logaritmando: ");
			scanf("%f",&valor2);
			
			while(valor1<=valor2)
			{
				valor1*=valor1;
				contlog++;
			}
			printf("Logaritmo = %d",contlog);
			
	}
}
