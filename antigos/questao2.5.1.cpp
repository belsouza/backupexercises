// Questão 5 

#include <stdio.h>

float total ( float *parcial ){
	num = 0.0;
	num = num + parcial;
	return num;
}

void cardapio (int cod, float qte){	

	if(cod == 100){
		printf ("%d x Cachorro-quente:  %.2f\n", (int)qte,  qte * 3.5 );
		
	}
	else{
		
		if(cod == 101){
			printf ("%d x Bauru simples:  %.2f\n", (int)qte,  qte * 4.5 );
		}
		else{
			
			if(cod == 102){
				printf ("%d x Bauru com ovo  %.2f\n", (int)qte,  qte * 5.2 );
			}
			else{
				
				if(cod == 103){
					printf ("%f x Hamburquer:  %.2f\n", (int)qte,  qte * 3.0 );
				}
				else{
					
					if(cod == 104){
						printf ("%d x Cheeseburguer:  %.2f\n", (int)qte,  qte * 4.0 );
					}
					else{
						
						if(cod == 105){
							printf ("%d x Refrigerante:  %.2f\n", (int)qte,  qte * 2.5 );
						}
						else{							
							printf ("Opcao Invalida\n");
						}
					}
				}
			}
		}
	}	
	
	return;
	
}



int main(void){
	
	int cod;
	float qte;
	
	
	do{
		
		printf ("Entre com o codigo: ; 000 para sair:  ");
		scanf("%d", &cod);
			
		if (cod != 000){			
			
			printf("Entre com a quantidade: ");
        	scanf("%f", &qte);
			cardapio (cod, qte);
		}
		else{
			
			printf (" Obrigado pela prenferencia! Agora sair.\n");
			break;
		}		
		
	}while (cod != 000);
	

	return 0;	
}
