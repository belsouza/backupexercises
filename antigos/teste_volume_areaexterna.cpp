/*

Determine e informe
a área externa e o volume de uma caixa
de lados a, b e c,
fornecidos pelo usuário.

3.761seg na mesma linha
3.678

*/

#include <stdio.h>

int main(void){
	float a, b, c, ae, vol;
		
	printf ("\nEntre com o valor da dimensao a: ");
	scanf ("%f", &a);
	printf ("\nEntre com o valor da dimensao b: ");
	scanf ("%f", &b);
	printf ("\nEntre com o valor da dimensao c: ");
	scanf ("%f", &c);
	
	ae = ((a*b)+(a*c)+(b*c))*2;
	vol = a * b * c;
	
	printf ("Area Externa: %.2f\n", ae );
	printf ("Volume: %.2f\n", vol);
	return 0;
}
