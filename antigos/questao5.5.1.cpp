/*
lista 5 exercicio 5
QUESTÃO 05: Elabore um programa que calcule a média ponderada de n elementos.
Observação: na média ponderada, cada elemento possui um peso que representa a sua contribuição no cálculo da média final.
*/

#include <stdio.h>

int main(void)
{
	int i, n;
	float elem, peso, num;
	float sumnum = 0, sumden = 0;
	float media;
	
	
	printf("Entre com o numero de termos:  ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		printf("\nEntre com o %d termo: ", i);
		scanf("%f", &elem);
		
		printf("\nEntre com o peso do %d termo: ", i);
		scanf("%f", &peso);
		
		num = peso * elem; //elem é o elemento. e o peso eh adicionado. O produto é adicionado
		sumnum = sumnum + num; //soma do numerador = 1 * elem + 2 * elem e assim vai
		sumden = sumden + peso; //pega os valores que foram inseridos pelo usuario.
		
	}
	
	media = sumnum / sumden;
	printf("\n*****************\nA media ponderada dos %d elementos eh %.2f \n", n, media);
	return 0;
}
