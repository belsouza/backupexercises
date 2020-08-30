/*
Lista 5 exercicio 4
QUESTÃO 04: A prefeitura de uma cidade fez uma pesquisa com 300 de seus habitantes,
 coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$ 1.000,00.
*/

#include <stdio.h>

int main(void)
{
	int i;
	int hab = 10; //300
	int nfilhos = 0;
	float sal, somsal = 0, somnf = 0, n1000 = 0;
	float medspop, mednf, perc, msal = 0;
	
	for(i = 1; i <= hab; i++)
	{
		printf("\nE%d - Entre com o valor do salario: ", i);
		scanf("%f", &sal);
		
		printf("\nEntre com o numero de filhos: ");
		scanf("%d", &nfilhos);
		
		somnf = somnf + nfilhos;
					
		if(sal == 0)//inicialização
		{
			somsal = sal; //soma do salario = primeiro salario
			msal = sal; //maior salario = primeiro salario
		}
		else
		{
			somsal = somsal + sal;
			if(sal > msal)
			{
				msal = sal;
			}
			
			if(sal > 1000)
			{
				n1000++;
			}
		}
	}
	
	medspop = somsal / hab;
	mednf = somnf / hab;
	perc = ( n1000 * 100 )/ hab;
	
	printf("\n******************************************************\n");
	
	printf("\n A media do salario da populacao eh: %.2f\n", medspop);
	printf("\n A media do numero de filhos eh %.0f\n", mednf);
	printf("\n O maior salario eh: %.2f\n", msal);
	printf("\n Percentual de pessoas com sal > 1000 eh: %d%%\n", (int)perc);
	return 0;
	
}
