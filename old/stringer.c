#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void grover( int *base, int *digito );
long long int cpfnumbertoint();
void cpfnumbertointstring( int str[] );
void formatnumber();
void show_int_string( int *vet );

int main(void)
{
	int numerocpf[20], i;
	int  base, digito;
	cpfnumbertointstring(numerocpf);
	show_int_string( numerocpf );
	//formatnumber();
	//printf("\n%lli", cpfnumbertoint());
	return 0;
}



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


//input automatico com formatacao em tempo real
void cpfnumbertointstring( int str[] )
{
	int i, status, num;
	status = 0, i = 1;
	while(status == 0)
	{
		num = getch();
		if ((num == 13) || (i > 11))//techa enter - ascii
		{
			status = 1; //encerra a leitura e a funcao
		}
		else
		{		
			*str = (char)num - '0';
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
			str++;
			i++;
		}
	}
}



void formatnumber()
{	
	int i, c, status, soma, temp;
	status = 0, i = 1;
	
	while( status == 0 )
	{
		c = getch();
		if(c == 13)
		{
			status = 1;
		}
		else
		{
			putchar(c);
			if(i % 3 == 0)
			{
				putchar(46);
			}
			i++;
		}		
	}	
}

void show_int_string( int *vet )
{
	int i;
	printf("\n\n");
	for(i = 0; i < 11; i++)
	{
		printf("%d / ", vet[i]);
	}
}
