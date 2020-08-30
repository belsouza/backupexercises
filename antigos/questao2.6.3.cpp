// questao 6

#include <stdio.h>



int main(void) {

	int num;
	int a, b, c;
	int maior, meio, menor;

    printf("Entre com o tipo de ordenacao: \n1. para crescente;\n2. para decrescente;\n3. para o maior estar no meio.\n");
    scanf("%d", &num);

	//i = 1: os três valores em ordem crescente;
	//i = 2: os três valores em ordem decrescente;
	//i = 3: o maior valor deve ser apresentado no meio dos outros;
	
	if ((num >= 1)&&(num <= 3)) //Validação do numero
	{
		
		printf("\nEntre com o primeiro numero: ");
		scanf("%d", &a);
	
		printf("\nEntre com o segundo numero: ");
		scanf("%d", &b);
	
		printf("\nEntre com o terceiro numero: ");
		scanf("%d", &c);
		
		if ((a > b) && (a > c))
		{
			maior = a;
			
			if(b > c)
			{
				meio = b;
				menor = c;
			}
			else
			{
				meio = c;
				menor = c;
			}
		}
		else{
			
			if ((b > a)&&(b > c))
			{
				maior = b;
				
				if(a > c)
				{
					meio = a;
					menor = c;
				}
				else
				{
					meio = c;
					menor = a;
				}
			}
			else			
			{
				maior = c;
				
				if (a > b)
				{
					meio = a;
					menor = b;
				}
				else
				{
					meio = b;
					menor = a;
				}				
			}	
			
		}
		
		
	   if (num == 1)
	   {
	       printf ("Ordenacao crescente: %d < %d < %d", menor, meio, maior);
	   }
	   else
	   {
	   		if (num == 2)
	   		{
	   			printf ("Ordenacao decrescente: %d > %d > %d", maior, meio, menor);
			}
			else
			{
				printf ("Meio: %d < %d > %d", meio, maior, menor);
			}
	   }
	  
   }
   else{
   	 printf (" Numero invalido. ");
   }
   

	return 0;
}
