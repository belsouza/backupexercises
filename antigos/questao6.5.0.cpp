/*
QUESTAO 05: Uma pesquisa foi feita coletando informacoes (idade, altura e peso) de um grupo de pessoas.
Pede-se a implementacao de um programa que proceda com a leitura de tais informacoes (ate que o usuario opte por concluir a entrada de dados) e calcule:
ƒ{ A quantidade de pessoas com idade superior a 50 anos;
ƒ{ A media de altura das pessoas com mais de 80 kg;
ƒ{ O maior peso dentre as pessoas acima de 1.65 m de altura e com idade inferior a 30 anos.
*/

#include <stdio.h>

int main(void)
{
	//Uma pessoa
	int idade = 0;
	float altura = 0;
	float peso = 0;	
	int i = 0, imedia = 0;
	float soma = 0, media = 0, maior = 0;
	
	
	printf("\n****  Menoo  ****** - (0 para sair)\n\n");
	
	do
	{
		printf("\nEntre com a idade: ");
		scanf("%d", &idade);
		
		printf("\nEntre com a altura: ");
		scanf("%f", &altura);
		
		printf("\nEntre com o peso: ");
		scanf("%f", &peso);
		
		if(idade >= 50)
		{
			i++;
		}
		
		if(peso >= 80)
		{
			soma = soma + altura;
			imedia++;
		}
		
		if((altura >= 1.65) && (idade <= 30))
		{
			if(maior == 0)
			{
				maior = peso;
			}
			else
			{
				if(maior > peso)
				{
					maior = peso;
				}
			}
		}		
		
	}
	while( (idade != 0 ) || (altura != 0.0) || (peso != 0.0) );
	
	media = soma / imedia;
	
		
	printf("\nA quantidade de pessoas com idade superior a 50 anos eh %d. ", i);
	printf("\nA media de altura das pessoas com mais de 80 kg eh: %.2f ", media);
	printf("\nO maior peso dentre as pessoas acima de 1.65 m de altura e com idade inferior a 30 anos eh %.2f,", maior );
		
		return 0;
}
