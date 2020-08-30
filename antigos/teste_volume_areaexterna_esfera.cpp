/*
Determine e informe
a área externa e o volume de uma esfera
de raio r,
fornecido pelo usuário
OBS.: A = 4.pi.r2
 V = (4/3).pi.r3

*/

#include <stdio.h>

float areaexterna ( float raio ){
	return 4 * 3.14159 * raio * raio;
}

float volumeesfera ( float raio ){
	return ( 4/3 ) * 3.14159 * raio * raio * raio;
}

int main(void){
	
	float r;
	printf("Entre com o valor do raio: ");
	scanf("%f", &r);
	printf ("\n\nArea externa da esfera: %.2f\n", areaexterna(r));
	printf ("Volume da esfera: %.2f\n", volumeesfera(r));
	return 0;	
}
