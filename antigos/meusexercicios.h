/*
*****************************
Exercicios
*****************************
*/

#include <stdlib.h>

int morphus()
{
	typedef struct {
      int dia, mes, ano; 
   } data;
   printf ("sizeof (data) = %d\n", 
            sizeof (data));
   return EXIT_SUCCESS;
	
}

void operadorContador()
{
	int index = 0, contador;
	char letras[5] = "Joao";
	for (contador = 0; contador < 1000; contador++)
	{
		printf ("\n%c", letras[index]);
		(index==3) ? index = 0: ++index;
	}	
}

void charepara()
{
	int count = 0;
    char ch;
    do
    {
   	printf("Entre com um char: ");
   	scanf ("%c", &ch);
   		if (ch == 'x')
   		{
   			printf ("Operacao encerrada; \n");
   			break;
		}
		else
		{
			printf("\nLetra: %c, \n", ch);
			scanf ("%c", &ch);  //continue;
		}	 
	
   	count++;
   }
   while (ch!='x');
   return;	
}
