/*
Lista 4 exercicio 8
QUESTÃO 08:
Fazer um programa que auxilie o orgão regulador no cálculo do total de recursos
arrecadados com a aplicacao de multas de transito.
O programa deve ler as seguintes informacoes para cada motorista:
ƒ{ O numero da carteira de motorista;
ƒ{ Numero de multas;
ƒ{ Valor de cada uma das multas.
Deve ser exibido o valor da divida de cada motorista e ao final da leitura o total de recursos arrecadados (somatorio de todas as multas).
 O programa tambem devera apresentar o numero da carteira do motorista que obteve o maior numero de multas.
*/

#include <stdio.h>

int main (void) 
{   
	float vmulta, somulta = 0.0, campmulta = 0.0, arrecadacao = 0;	
	int n, i, j, habilitacao, nmultas, camphabil = 0;
	
	
	printf("Entre com o numero de dados: ");
	scanf("%d", &n);
	
	fflush(stdin);
	for(i = 1; i <= n; i++)
	{
		fflush(stdin);
		printf("\n\nMotorista %d: \n", i);
		printf("\nEntre o numero da habilitacao: (4 digitos): ");
		scanf("%d", &habilitacao);
		
		fflush(stdin);
		printf("\nEntre com o numero de multas: ");
		scanf("%d", &nmultas);
		
		
		for(j = 1; j <= nmultas; j++)
		{
			fflush(stdin);
			printf("\nEntre com a %da multa: ", j );
			scanf("%f", &vmulta);
			
			somulta = somulta + vmulta;
			arrecadacao = arrecadacao + vmulta;
		}
		
		if( somulta >= campmulta)
		{
			campmulta = somulta;
			camphabil = habilitacao;			
		}
		
		printf("\n\nTotal de multas para %d eh: %.2f \n", habilitacao, somulta);
		somulta = 0;
		habilitacao = 0;		
	}
	
	printf("\n\nO campeao das multas eh %d com %.2f de multas!!!!\n\n", camphabil, campmulta);
	printf("\nNesta imoralidade foram arrecadados R$ %.2f.  ", arrecadacao);
	return 0;   
}





