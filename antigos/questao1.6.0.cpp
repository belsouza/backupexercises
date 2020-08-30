/*
Lista 1 exercicio 6
*/

#include <stdio.h>

int main(void)
{
	int dia, mes, i=0;
	printf ("Entre com o dia: ");
	scanf ("%d", &dia);
	printf ("Entre com o mes: ");
	scanf ("%d", &mes);
     if (mes == 1)
     {
     	i = dia;
	 }
	 else
	 {
		if (mes == 2)
		{
			i = dia + 31 + 28;
		}
		else
		{
			if(mes == 3){
				i = dia + 31 + 28 + 31; 
			}
			else
			{
				if (mes == 4)
				{
					i = dia + 31 + 28 + 31 + 30;
				}
				else
				{
					if (mes == 5)
					{
						i = dia + 31+ 28 + 31 + 30 + 31;
					}
					else
					{
						if (mes == 6)
						{
							i = dia + 31 + 28 + 31 + 30 + 31 + 30;
						}
						else
						{
							if (mes == 7)
							{
								i = dia + 31 + 28 + 31 + 30 + 31 + 30 + 31;
							}
							else
							{
								if (mes == 8)
								{
									i = dia + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
								}
								else
								{
									if (mes == 9)
									{
										i = dia + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
									}
									else
									{
										if (mes == 10)
										{
											i = dia + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
										}
										else
										{
											if (mes == 11)
											{
												i = dia + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
											}
											else
											{
												if (mes == 12)
												{
											 		i = dia + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31;	
												}
												else
												{
													printf ("Mes invalido. ");
												}
												
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	printf ("\n\n O dia %d/%d eh o %d dia do ano.", dia, mes, i);
	return 0;
}
