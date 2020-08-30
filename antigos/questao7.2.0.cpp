/*
QUESTÃO 02:
Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit
*/

#include <stdio.h>

float farenheit ( float tc )
{	
   float tf;
   tf =   (tc * 1.8) + 32.0;
   return tf; 
}

int main(void)
{
	float tc, tf;
	printf("\nEntre com a temperatura em Celsius: ");
	scanf("%f", &tc); 
	tf = farenheit( tc );
	printf("%.2f", tf );
}
