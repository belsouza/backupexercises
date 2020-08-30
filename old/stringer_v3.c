#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void aniversaryground( int *dd, int *mm, int *aaaa )
{
	int i, j;
	int num, temp, status = 0, soma = 0;
	
	*dd = *mm = *aaaa = 0;	
	while(status == 0)
	{
		fflush(stdin);
		num = getch();
		temp = (num) - '0';
		
		if ((num == 13) && (i <= 8))//techa enter - ascii
		{
			status = 1; //encerra a leitura e a funcao
		}
		else
		{
			if(i < 1)
			{
				if(i == 0)
				{				
					*dd = *dd + temp;
				}
				else
				{
					*dd = (*dd * 10) + temp;
				}
			}
			
			if((i > 1)&&(i < 3))
			{
				if(i == 0)
				{				
					*dd = *dd + temp;
				}
				else
				{
					*dd = (*dd * 10) + temp;
				}
			}
			
			
			
		
			putchar(num);			
			if((i == 1 )||(i == 3))
			{
				putchar('/');			
			}
						
			i++;
		}
	}
	

	
	
}

int main(void)
{
	int dd, mm, aaaa;
	aniversaryground( &dd, &mm, &aaaa );
	printf("\nData: %d / %d / %d", dd, mm, aaaa);
	
}

