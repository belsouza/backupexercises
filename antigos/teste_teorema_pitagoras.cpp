/*
Determine e informe
as raízes da equação
a.x2 + b.x + c = 0,
sendo a, b e c fornecidos pelo usuário.

*/
#include <stdio.h>
#include <math.h>


void baskhara ( float a, float b, float c ){
	
	double delta, x1, x2;
	delta = (b * b) - 4 * a * c;
	if (delta >= 0){
		
		x1 = (- b + (sqrt(delta)))/ 2*a;
		x2 = (- b - (sqrt(delta)))/ 2*a;
		printf ("As raizes sao: %d e %d ", (int)x1, (int)x2);
	}
	else{
		printf ("\nNao ha raiz real ");
	}
}


int main (void){
	
	float a, b, c;
	printf ("Entre com o primeiro termo - ax2: ");
	scanf ("%f", &a);
	printf ("Entre com o segundo termo - bx: ");
	scanf ("%f", &b);
	printf ("Entre com o terceiro termo - c: ");
	scanf ("%f", &c);
	baskhara ( a, b, c );
	return 0;	
}
