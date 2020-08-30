// Questão 5 

#include <stdio.h>

int main(void){
	
	int cod;
	float qte;
	
	printf ("Emtre com o codigo: ");
	scanf("%d", &cod);
	
	printf("Entre com a quantidade: ");
	scanf("%f", &qte);
	
	if(cod == 100){
		printf ("%d x Cachorro-quente:  %.2f", (int)qte,  qte * 3.5 );
	}
	else{
		
		if(cod == 101){
			printf ("%d x Bauru simples:  %.2f", (int)qte,  qte * 4.5 );
		}
		else{
			
			if(cod == 102){
				printf ("%d x Bauru com ovo  %.2f", (int)qte,  qte * 5.2 );
			}
			else{
				
				if(cod == 103){
					printf ("%d x Hamburquer:  %.2f", (int)qte,  qte * 3.0 );
				}
				else{
					
					if(cod == 104){
						printf ("%d x Cheeseburguer:  %.2f", (int)qte,  qte * 4.0 );
					}
					else{
						
						if(cod == 105){
							printf ("%d x Refrigerante:  %.2f", (int)qte,  qte * 2.5 );
						}
						else{							
							printf ("Opcao Invalida. Os codigos vao de 101 a 105\n");
						}
					}
				}
			}
		}
	}	
}
