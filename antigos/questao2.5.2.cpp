// Questão 5 

#include <stdio.h>

float cardapio (int cod, float qte){
	
	float subtotal = 0.0;
	
	if(cod == 100){
		printf ("%d x Cachorro-quente:  %.2f\n\n", (int)qte,  qte * 3.5 );
		subtotal = subtotal + (qte * 3.5);
		
	}
	else{
		
		if(cod == 101){
			printf ("%d x Bauru simples:  %.2f\n\n", (int)qte,  qte * 4.5 );
			subtotal = subtotal + (qte * 4.5);
		}
		else{
			
			if(cod == 102){
				printf ("%d x Bauru com ovo  %.2f\n\n", (int)qte,  qte * 5.2 );
				subtotal = subtotal + (qte * 5.2);
			}
			else{
				
				if(cod == 103){
					printf ("%d x Hamburquer:  %.2f\n\n", (int)qte,  qte * 3.0 );
					subtotal = subtotal + (qte * 3.0);
				}
				else{
					
					if(cod == 104){
						printf ("%d x Cheeseburguer:  %.2f\n\n", (int)qte,  qte * 4.0 );
						subtotal = subtotal + (qte * 4.0);
					}
					else{
						
						if(cod == 105){
							printf ("%d x Refrigerante:  %.2f\n\n", (int)qte,  qte * 2.5 );
							subtotal = subtotal + (qte * 2.5);
						}
						else{							
							printf ("Opcao Invalida\n\n");							
						}
					}
				}
			}
		}
	}	
	
	return subtotal;
	
	
}

int main(void){
	
	int cod;
	float qte;
	float sub = 0.0, parcial;
	
	do{
		
		printf ("Entre com o codigo: ; 000 para sair:  ");
		scanf("%d", &cod);
			
		if (cod != 000){			
			
			printf("Entre com a quantidade: ");
        	scanf("%f", &qte);
			
			parcial = cardapio( cod, qte );
			sub = sub + parcial;			
		}
		else{
			
			printf (" Obrigado pela preferencia! Tome sua conta.\n");
			break;
		}		
		
	}while (cod != 000);
	printf ("Total: %.2f", sub);

	return 0;	
}
