#include <stdio.h>
#include <conio.h>

void datadenascimento(int *dd, int *mm, int *aaaa)
{
	int i, j, num, temp;
	
	i = 1;
	*dd = *mm = *aaaa = 0;
	while(i <= 8)
	{
		num = getch();
		putchar(num);
		temp = (num)- '0';
		if(i <= 2) // Dias - os dois primeiros digitos
		{
			if(i == 1)
			{
				*dd = *dd + temp;
			}
			else
			{
				*dd = (*dd * 10) + temp;
				putchar('/');
			}			
		}
		else
		{
			if(i <= 4) // meses - o terceiro e o quaarto numero
			{
			 	if(i == 3)
				{
				 	*mm = *mm + temp;
				}
				else
				{
					*mm = (*mm * 10) + temp;
					putchar('/');
				}				
			}
			else // anos
			{
				if(i == 5)
				{
					*aaaa = *aaaa + temp;
				}
				else
				{
					*aaaa = (*aaaa * 10) + temp;
				}
			}	
		}
					
		i++;
	}	

}

int main(void)
{
	int dd, mm, aaaa;
	datadenascimento(&dd, &mm, &aaaa);
	printf("\nR: %d / %d / %d ", dd, mm, aaaa);
}
