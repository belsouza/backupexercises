/*
Lista 4 exercicio 9
QUESTÃO 09:
Escrever um programa que encontre o quinto número maior que 1000, cuja divisão por 11 tenha resto 5.
*/

#include <stdio.h>

int main(void)
{
    int i, j = 0, h;
    int start = 1000;
    int selected = 0;
    
    while(i < 5)
    {
    	
    	h = start+j;
      	
    	if(h%11 == 5)
    	{
			selected = h;
			++i; 
			++j;   		   		
		}
		else
		{
			++j;
		}		 
	}
	
	printf("%d", selected);
	return 0;
}


