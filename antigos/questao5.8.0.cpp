/*
Lista 5 questao 8
Faça um programa que leia um número real x e um número inteiro y. 
Em seguida, o programa deve ler 100 números reais e calcular quantos destes estão a uma “distância” de x de, no máximo, y.
Exemplo: suponha x = 10 e y = 2. O programa pede para calcular quantos dos 100 números 
fornecidos estão compreendidos entre 8.0 (a uma distância de 2 (y) antes de 10 (x)) e 12.0 (a uma distância de 2 (y) depois de 10 (x))
*/
#include <stdio.h>

int main(void)
{
	int i;
	float y; //int y
	float x, unk, dists = 0, disti = 0;
	int cont = 0;	
	float n = 10; //100
	
	printf("\nEntre com um numero real: ");
	scanf("%f", &x);
		
	printf("\nEntre com o inteiro: ");
	scanf("%f", &y);
	
	
	for(i = 1; i <= n; i++)
	{
		printf("\nEntre com um numero qualquer: ");
		scanf("%f", &unk);
		
		dists = x - y;
		disti = x + y;
		
		if((unk > dists) && (unk < disti))
		{
			cont = cont + 1;			
		}		
	}
	
	printf("Existem %d numeros entre %.0f e %.0f", cont, dists, disti );
	return 0;
	
}
