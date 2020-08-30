/*
Lista 4 exercicio 10
QUESTAO 10:
Foi feita uma pesquisa entre os habitantes de uma regiao e coletados os dados de altura e sexo das pessoas. 
Faca um programa que leia as informacoes de 50 pessoas e informe:

ボ a maior e a menor alturas encontradas;
ボ a media de altura das mulheres;
ボ a media de altura da populacao;
ボ o percentual de homens na populacao.

*/

#include <stdio.h>

int main(void)
{
	int i, nf = 0, nm = 0;
	int pes = 4; //numero de pessoas  eh 50, mas vou botar apenas 4
	float altura;
	float maior = 0, menor = 0; 
	float somaAF = 0, somaT = 0;
	float perc, mediaT, mediaM;
	char sex;
	
	printf("\n************* Pesquisa com %d pessoas ********************\n", pes);
	
	for(i = 1; i <= pes; i++)
	{
		fflush(stdin);
		printf("\nEntre com o dado do individuo %d: ", i);
		printf("\n\nSexo: ");
		scanf("%c", &sex);
		
		printf("\nAltura: ");
		scanf("%f", &altura);
		
		if( sex == 'f' || sex == 'F')
		{
			nf = nf + 1;
			somaAF = somaAF + altura;
			somaT = somaT + altura;			
			
			if(maior == 0 || menor == 0)
			{
				maior = altura;
				menor = altura;
			}
			else
			{
				if(altura > maior)
				{
					maior = altura;
				}
				else
				{
					if(altura < menor)
					{
						menor = altura;
					}
				}
				
			}			
		}
		else
		{
			if( sex == 'm' || sex == 'M')//se sex = Masculino
			{
				nm = nm + 1;
				somaT = somaT + altura;	
				
				if(maior == 0 || menor == 0)
				{
					maior = altura;
					menor = altura;
				}
				else
				{
					if(altura > maior)
					{
						maior = altura;
					}
					else
					{
						if(altura < menor)
						{
							menor = altura;
						}
					}
				}
				
				
			}
			else
			{
				printf("\nLetra desconhecida");
			}
		}
		
		perc = (nm * 100)/(nf + nm);
		mediaM = somaAF/nf;
		mediaT = somaT / (nf + nm);
	}
	
	
	printf("\nForam pesquisados %d homens e %d mulheres;", nm, nf);
	printf("\nO percentual de homens eh:  %d %% \n",  (int)perc );
	
	printf("\nA altura maior mede %.2f m; ", maior);
	printf("\nA altura menor mede %.2f m; ", menor);
	
	printf("\n\nA media das alturas das mulheres eh: %.2f", mediaM );	
	printf("\nA media das alturas totais eh: %.2f", mediaT );
	return 0;
}














