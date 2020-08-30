/*
QUESTÃO 09:
Implementar uma função que, dado um
número Lista.c (completo, com a função
remover)inteiro, calcule (e retorne) a soma e a
média de seus divisores.
*/

#include <stdio.h>

void listometro(int n, int *soma, float *media)
{
	int i, s = 0, cont = 0; //*soma = 0
	float m;
	for(i = 1; i <= n; i++)
	{
		if(n%i == 0)
		{
			if(n%i==0)
			{
				s += i;	//*soma += i;			
			}
			cont++;
		}
	}
	
	m = (float)s/cont; // *media = (float) *soma/cont
	*soma = s;
	*media = m;
	//pode haver *a *= b... O compilador entende isso.
}

int main(void)
{
	int num, sum;
	float med;
	
	printf("\nEntre com um numero: ");
	scanf("%d", &num);	
    listometro(num, &sum, &med);
    printf("Soma dos divisores de %d = %d\n", num, sum);
    printf("Media dos divisores de %d = %.2f\n", num, med);    
}
