/*
Feito por colega <3
*/

#include <stdio.h>

int main(void)
{
	int num_Carteira,num_Multas,valor_Multas,total_Motorista,soma_Multas = 0,mais_multa=0,id_mais_multa=0;
	char pergunta;


	for (int i = 0; i <= 0; --i)
	{
		total_Motorista = 0;

		fflush(stdin);
		printf("Numero da Carteira: \n");
		scanf("%d",&num_Carteira);

		fflush(stdin);
		printf("Numero da Multas: \n");
		scanf("%d",&num_Multas);

		if (num_Multas > mais_multa)
		{
			id_mais_multa = num_Carteira;
			mais_multa = num_Multas;
		}

		for (int i = 1; i <= num_Multas; ++i)
		{
			fflush(stdin);
			printf("Valor da %d Multa: \n",i);
			scanf("%d",&valor_Multas);

			total_Motorista = valor_Multas + total_Motorista;
		}

		soma_Multas = total_Motorista + soma_Multas;
		
		printf("Total a se pagar pelo motorista %d :  \n", num_Carteira);
		printf("R$ %d \n", total_Motorista);

		printf("\n");
		
		fflush(stdin);
		printf("Deseja encerrar o programa? (S/N) \n");
		scanf(" %c",&pergunta);

		printf("\n");

		if (pergunta == 'S' || pergunta == 's')
		{
			break ;
		}
	}

	printf("Somatorio das Multas: \n");
	printf("R$ %d \n", soma_Multas);

	printf("Motorista com mais multas: \n");
	printf(" %d \n", id_mais_multa);

}
