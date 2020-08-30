#include <stdio.h>

int main(void){
	float a, b;	
	printf("Entre com o lado a: ");
	scanf("%f", &a );
	printf("Entre com o lado b: ");
	scanf("%f", &b );
	if (a == NULL ||b ==NULL){
		printf("Elemento nulo. A execucao sera abortada.");
	}
	else{
		printf ("Area: %.2f\n", a*b);
		printf ("Perimetro: %.2f\n", (a*2)+(b*2));
		return 0;
	}
}
