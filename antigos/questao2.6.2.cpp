// questao 6

#include <stdio.h>



int main(void) {

	int num;
	int a, b, c;


    printf("Entre com o inteiro: \n1. para crescente;\n2. para decrescente;\n3. para meio.\n");
    scanf("%d", &num);

	//i = 1: os três valores em ordem crescente;	

	//i = 2: os três valores em ordem decrescente;

	//i = 3: o maior valor deve ser apresentado no meio dos outros;
	
	if ((num >= 1)&&(num <= 3))
	{
		
		printf("\nEntre com o primeiro numero: ");
		scanf("%d", &a);
	
		printf("\nEntre com o segundo numero: ");
		scanf("%d", &b);
	
		printf("\nEntre com o terceiro numero: ");
		scanf("%d", &c);

	
		if (b >= c){ // b >= c
			
			if (b > c){ // b > c
				
				if (a >= b){ // (b > c) e (a >= b)
					
					if(a > b){ // (b > c) e (a > b)
						
						if (num == 1){
							printf ("1. %d < %d < %d ", c, b ,a ); // Ok 1
						}
						else
						{
							if (num == 2){
								printf ("2. %d > %d > %d ", a, b ,c );
							}
							else{
								printf ("3. %d < %d > %d ", b, a ,c );
							}
						}
						
					} // fim (b > c) e (a > b)
					else
					{ // (b > c) e (a == b)
					   if (num == 1){
					   	    printf ("4. %d == %d > %d ", a, b ,c );
					   }
					   else
					   {
					   	    if(num == 2){
					   	  	    printf ("5. %d > %d == %d", c, b ,a );
							 }
							 else
							 {
							 	printf ("6. %d == %d > %d ", a, b ,c );
							 }
					   }
						
					} // fim (b > c) e (a == b)				
				} // fim (b > c) e (a >= b)
				else
				{ // (b > c) e (a < b)
				
				   if (num == 1){
				   	    
				   	    if(c > a){
				   	    	printf ("7a. %d < %d < %d ", a, c ,b ); //ok 1.
						}
						else
						{
							printf ("7b. %d < %d < %d ", c, a ,b ); //ok 1
						}
				   	    
				   }
				   else{
				   	
				   	   if(num == 2){
						        //b > c e b > a
							   if(c > a){							  	   	   	
					   	   	        printf ("8a. %d > %d > %d ", b, c ,a );
						    	}
						    	else
								{
						        	printf ("8b. %d > %d > %d ", b, a ,c );	
								}
						}
						else{
							printf ("9. %d < %d > %d ", a, b ,c );
						}
				   	  
				   }
					
				} // end (b > c) e (a < b)
				
			} // end b > c
			else{
				//b == c
				if (a >= b){
					
					if (a > b){
						
						if (num == 1){
							printf ("10. %d == %d < %d ", c, b ,a );
						}
						else{
							
							if (num == 2){
								printf ("11. %d > %d == %d ", a, b ,c );
							}
							else{
								printf ("12. %d < %d > %d ", b, a ,c );
							}
							
						}
						
					}
					else
					{ //a == b - nao precisa pq tudo eh igual
					     
						printf ("13. %d == %d == %d ", a, b ,c );
					}				
				}else{
					//a < b e b == c
					
					if (num == 1){
						printf ("14. %d < %d == %d ", a, b ,c );
					}
					else{
						
						if(num == 2){
							printf ("15. %d == %d > %d ", b, c ,a );
						}
						else{
							printf ("16. %d < %d > %d ", a, b ,c );
						}
						
					}
					
				}
			}
			
		} // fim b >= c
	    else
	    {  // b < c
	    	if (a >= b){
					
					if (a > b){
						
						if (num == 1){
							
							if (a > c){ //a > b e b < c
								printf ("17a. %d > %d > %d ", b, c ,a );	
							}
							else{
								printf ("17b. %d > %d > %d ", b, a ,c ); //ok 1
							}
							
						}
						else{
							if(num == 2){
								  
								if (a > c){ //a > b e b < c
									printf ("18a. %d < %d < %d ", a, c ,b );	
								}
								else{
									printf ("18b. %d < %d < %d ", c, a ,b );
								}
														
							}
							else
							{
								printf ("19. %d > %d < %d ", a, b ,c );
							}
						}
						
					}
					else
					{ //b < c e a == b
					
					   if (num == 1){
					   	    printf ("20. %d < %d < %d ", a, b ,c );
					   }
					   else{
					   	    if(num == 2){				   		
					   		   printf ("21. %d > %d > %d ", c, b ,a );
						    }
						    else
						    {
						    	printf ("22. %d == %d < %d ", a, b ,c );
							}
					   	
					   }
						
					}				
				}else{
					//a < b e  b < c
					
					if (num == 1){
						printf ("23. %d < %d < %d ", a, b ,c ); //OK 1
					}
					else
					{
						if (num == 2){
							printf ("24. %d > %d > %d ", c, b ,a );
						}
						else{
							printf ("25. %d < %d > %d ", b, a ,c );
						}
						
					}
					
			}
	      //fim  b < c	
		}
   }
   else{
   	 printf (" Numero invalido. ");
   }

	return 0;
}
