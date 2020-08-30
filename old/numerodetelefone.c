#include <stdio.h>
#include <conio.h>

void numerodetelefone( long long int *numero )
{
	int i, j, num, temp, execution = 1;
	
	i = 1;
	*numero = 0;
	while(execution == 1)
	{	
		fflush(stdin);	
		num = getch();
		temp = (num)- '0';
			
		if((num == 13)||(i >= 11))
		{
			execution = 0;
		}		
		
		if(i == 1)
		{
			putchar('(');
			putchar(num);
			*numero = *numero + temp;
		}		
		else if(i == 2)
		{
			putchar(num);
			putchar(')');			
		}
		else
		{
			putchar(num);
		}		
		*numero = (*numero * 10) + temp;
						
		i++;
	}	

}

int main(void)
{
	long long int numero;
	numerodetelefone(&numero);
	printf("\nR: %lli", numero);
}
