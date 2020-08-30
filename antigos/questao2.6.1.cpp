// questao 6

#include <stdio.h>



int main(void) {

	int inteiro;
	int a, b, c;

	printf("Entre com o inteiro: \n1. para crescente;\n2. para decrescente;\n3. para meio.\n");
	scanf("%d", &inteiro);

	printf("\nEntre com o primeiro numero: ");
	scanf("%d", &a);

	printf("\nEntre com o segundo numero: ");
	scanf("%d", &b);

	printf("\nEntre com o terceiro numero: ");
	scanf("%d", &c);

	//i = 1: os três valores em ordem crescente;	

	//i = 2: os três valores em ordem decrescente;

	//i = 3: o maior valor deve ser apresentado no meio dos outros;
	
	if((a >= b) && (a >= c)){
		
		if (b > c){
			
			printf ("Caso 1: %d < %d < %d\n\n", c, b, a);
			printf ("Caso 2: %d > %d > %d\n\n", a, b, c);
			printf ("Caso 3: %d < %d > %d\n\n", c, a, b);
			
		}
		else{
			
			if (c > b){
				
			printf ("Caso 4: %d < %d < %d\n\n", b, c, a);
			printf ("Caso 5: %d > %d > %d\n\n", a, c, b);
			printf ("Caso 6: %d < %d > %d\n\n", b, a, c);			
				
			}
			else{
				printf ("Caso 7: Tem termos iguais ai 1");
			}
		}
		
	}
	else{
		if ((b >= a) && (b >= c)){
			
			if (a > c){				
			
				printf ("Caso 8: %d < %d < %d\n\n", c, a, b);
				printf ("Caso 9: %d > %d > %d\n\n", b, a, c);
				printf ("Caso 10: %d < %d > %d\n\n", c, b, a);
				
			}
			else{
				
				if(c > a){
	
				printf ("Caso 11: %d < %d < %d\n\n", a, c, b);
				printf ("Caso 12: %d > %d > %d\n\n", b, c, a);
				printf ("Caso 13: %d < %d > %d\n\n", a, b, c);				
					
				}
				else{
					printf ("Caso 14: Tem termos iguais ai 2");					
				}
			}
		}
		else{
			if ((c >= a) && (c >= b)){
				
				if (a > b){
					
					printf ("Caso 15: %d < %d < %d\n\n", b, a, c);
					printf ("Caso 16: %d > %d > %d\n\n", c, a, b);
					printf ("Caso 17: %d < %d > %d\n\n", b, c, a);					
					
					
				}else{
				
					if (b > a){
						
						printf ("Caso 18: %d < %d < %d\n\n", a, b, c);
						printf ("Caso 19: %d > %d > %d\n\n", c, b, a);
						printf ("Caso 20: %d < %d > %d\n\n", a, c, b);	
						
					}				
					else{
						
						printf ("Caso 21: Tem termos iguais ai 3");
					}
				}
				
			}
			else{
				printf ("\nNumeracao desconhecida.");
			}
			
		}
		
	}
	
	return 0;
}
