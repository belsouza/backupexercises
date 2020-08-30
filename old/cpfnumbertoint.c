#include <stdio.h>

long long int cpfnumbertoint()
{
	int i, status, num, temp;
	long long int soma = 0;
	status = 0, i = 1;
	while(status == 0)
	{
		num = getch();
		temp = (num) - '0';
		
		if ((num == 13) || (i > 11))//techa enter - ascii
		{
			status = 1; //encerra a leitura e a funcao
		}
		else
		{
			if(i == 0)
			{				
				soma = soma + temp;
			}
			else
			{
				soma = (soma * 10) + temp;
			}
			
			putchar(num);
			
			if(i % 3 == 0)
			{
				if(i < 9)
				{
					putchar(46);
				}
				else
				{
					putchar(45);
				}				
			}			
			i++;
		}
	}
	
	return soma;
}

int main(void)
{
	printf("\n%lli", cpfnumbertoint());
	return 0;
	
}

