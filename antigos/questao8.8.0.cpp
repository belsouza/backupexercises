/*
QUESTÃO 08:
Dados um vetor de reais (cujos elementos estão ordenados crescentemente) e um número x, 
retornar a posição da primeira ocorrência de x (caso encontre-se no vetor) ou a posição na qual deveria estar (caso contrário).
*/

#include <stdio.h>

int poscrescente ( float *vet, float x)
{
	int i = 0;
	while(vet[i] <= x)
	{
		if(vet[i] == x)
		{
			return i;
		}
		i++;
	}	
	return i;

}
//se a quantidade muda precisa passar por referencia

int main(void)
{
	fflush(stdin);
	float x;
//	float vet[15] = {1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 15, 19, 20, 40};
    float vet[6] = {10, 15, 15, 20, 30, 35};
	int num;
	printf("Entre com o numero x: ");
	scanf("%f", &x);
	num = poscrescente(vet, x);	
	printf("O numero %.0f esta na posicao %d.", x, num);
	
}
