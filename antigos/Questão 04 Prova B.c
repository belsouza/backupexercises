/*Questão 04 [2,5 pontos]:
Determinada zona eleitoral possui 50 eleitores inscritos
que poderão votar, uma única vez, em um dos 4
candidatos para o único cargo em votação (códigos 10,
20, 30 ou 40). Pede-se o desenvolvimento de um
programa que:

a. Leia o voto de cada eleitor, considerando que
o processo terminará quando os 50 eleitores
votarem ou quando o número -1 for digitado
como voto;

b. Exiba o total de votos para cada candidato,
assim com a quantidade de votos brancos
(código 0) e de nulos (código sem candidato
associado). Além disso, exibir a quantidade de
abstenções (eleitores que não votaram).*/
#include<stdio.h>

int main()
{
	int voto,cont0=0,cont10=0,cont20=0,cont30=0,cont40=0,contnulo=0,contvotos=1;
	
	printf("Candidatos: 10 20 30 40\nPara votar em branco: 0\nPara votar nulo pressione codigo sem candidato associado\nPara sair digite -1\n\n");
	
	while(voto!=-1 || voto==50)		//Terminar quando completar 50 ou for digitado -1
	{
		//Obter os votos

		printf("Insira seu voto(%d): ",contvotos);
		scanf("%d",&voto);
	
		//Detecta qual candidato recebeu o voto
		switch(voto)
		{
			case 0:
				cont0++;
				break;
			case 10:
				cont10++;
				break;
			case 20:
				cont20++;
				break;
			case 30:
				cont30++;
				break;
			case 40:
				cont40++;
				break;
			default:
				if(voto!=-1)
				{
					contnulo++;
				}
		}
		
		//Conta quantos votaram
		if(voto!=-1)
		{
			contvotos++;
		}
	}
	
	//Exibir o total de votos para cada candidato
	printf("Candidato 10 = %d votos\n",cont10);
	printf("Candidato 20 = %d votos\n",cont20);
	printf("Candidato 30 = %d votos\n",cont30);
	printf("Candidato 40 = %d votos\n",cont40);
		
	//Exibir a quantidade de votos em branco(0)
	printf("Votos em branco = %d votos\n",cont0);
	
	//Exibir a quantidade de votos nulos(código sem candidato associado)
	printf("Votos nulos = %d votos\n",contnulo);
	
	//Exibir a quantidade de abstenções
	printf("Abstencoes = %d abstencoes",51-contvotos);
}
